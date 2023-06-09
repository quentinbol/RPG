##
## EPITECH PROJECT, 2023
## Project rpg
## File description:
## Build rpg of Victor C, Quentin B, Yann P, Matthew C.
##

SRC	=	src/main.c			\
		src/my_game_loop.c	\
		\
		src/animation/effect_animation/animation_fire.c		\
		src/animation/effect_animation/create_effect.c		\
		src/animation/effect_animation/effect.c				\
		src/animation/effect_animation/init_effect.c		\
		src/animation/effect_animation/init_rect_effect.c	\
		\
		src/animation/sound_effect/create_sound.c	\
		\
		src/animation/state_animation/state_enemy_animation.c	\
		src/animation/state_animation/state_giant_animation.c	\
		src/animation/state_animation/state_golem_animation.c	\
		src/animation/state_animation/state_ninja_animation.c	\
		src/animation/state_animation/state_pnj_animation.c		\
		\
		src/animation/animation_bis.c			\
		src/animation/animation.c				\
		src/animation/number_display.c				\
		src/animation/create_enemy_bis.c		\
		src/animation/create_enemy.c			\
		src/animation/create_ninja.c			\
		src/animation/init_set_sprite_anim.c	\
		src/animation/set_origin.c				\
		\
		src/erfunden/display_erfunden.c		\
		src/erfunden/event_erfunden.c		\
		src/erfunden/init_erfunden.c		\
		src/erfunden/loop_erfunden.c		\
		src/erfunden/start_main_erfunden.c	\
		src/erfunden/use_item.c				\
		src/erfunden/itemvent.c				\
		\
		src/obj/init_all_obj.c	\
		src/obj/loop_obj.c		\
		src/obj/func_obj_bis.c	\
		src/obj/function_obj.c	\
		src/obj/display_obj.c	\
		src/obj/ravage.c		\
		src/obj/ravage_event.c	\
		\
		src/event/event_check.c		\
		src/event/event_item.c		\
		src/event/event_mouvement.c	\
		src/event/event_player.c	\
		\
		src/hitbox/different_part.c		\
		src/hitbox/change_items_orientations.c	\
		src/hitbox/colision_handling.c			\
		src/hitbox/create_hitbox.c				\
		src/hitbox/hitbox.c						\
		src/hitbox/init_hitbox.c				\
		\
		src/list/list_add.c		\
		src/list/list_create.c	\
		src/list/list_get.c		\
		src/list/list_refresh.c	\
		src/list/list_remove.c	\
		\
		src/map/biggest_room.c		\
		src/map/boss_room.c			\
		src/map/main_room.c			\
		src/map/my_map_destroy.c	\
		src/map/upper_room.c		\
		src/map/which_map.c			\
		\
		src/menu/is_hooving_button.c	\
		src/menu/my_check_button.c		\
		src/menu/my_create_tuto_win.c	\
		src/menu/my_create_window.c		\
		src/menu/my_menu_disp.c			\
		src/menu/my_menu_loop.c			\
		src/menu/my_start_game.c		\
		src/menu/my_switch_window.c		\
		src/menu/my_turn_page.c			\
		src/menu/my_tuto_loop.c			\
		src/menu/my_window_create.c		\
		\
		src/mouvement/ia_movement_enemy.c		\
		src/mouvement/enemy_pause.c				\
		src/mouvement/mouvement_ninja_display.c	\
		src/mouvement/mouvement_enemy_display.c	\
		src/mouvement/algo_movement_enemy.c		\
		\
		src/menu_pause/display_menu_pause.c	\
		src/menu_pause/event_mouse_pause.c	\
		src/menu_pause/get_param_pause.c	\
		src/menu_pause/pause.c				\
		\
		src/name/my_disp_name.c		\
		src/name/my_event_name.c	\
		src/name/my_get_name_loop.c	\
		\
		src/quests/add_quest.c		\
		src/quests/display_quests.c	\
		src/quests/menu_quests.c	\
		src/quests/process_quests.c	\
		\
		src/statistisch/init_statistish.c		\
		src/statistisch/bourage_1.c	\
		src/statistisch/bourage_2.c	\
		src/statistisch/bourage_3.c	\
		src/statistisch/index_more.c	\
		src/statistisch/display_stat.c			\
		src/statistisch/stat_destroy.c			\
		src/statistisch/satitich.c				\
		src/statistisch/enemy_lifebar.c			\
		src/statistisch/boss_lifebar.c			\
		src/statistisch/ath.c					\
		src/statistisch/event_item.c			\
		src/statistisch/init_item.c				\
		src/statistisch/item.c					\
		src/statistisch/stat_main_caracter.c	\
		\
		src/utils/cm_strdup.c			\
		src/utils/cm_strlen.c			\
		src/utils/my_calloc.c			\
		src/utils/my_getnbr.c			\
		src/utils/my_get_origin.c		\
		src/utils/my_get_sprite.c		\
		src/utils/my_get_text.c			\
		src/utils/my_operation_vector.c	\
		src/utils/my_map_create.c		\
		src/utils/my_getcol.c			\
		\
		src/destroy/my_destroy_all.c				\
		src/destroy/my_destroy_animation.c			\
		src/destroy/my_destroy_animation_effect.c	\
		src/destroy/my_destroy_inv.c				\
		src/destroy/my_destroy_item.c				\
		src/destroy/my_destroy_quest.c				\
		src/destroy/my_destroy_window.c				\
		src/destroy/my_free_array.c					\
		src/destroy/my_quit_game.c					\
		\
		src/deadscreen/my_death_loop.c			\
		src/deadscreen/my_dead_screen_loop.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Werror -Wextra -I ./include/

SFML_FLAGS = -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio -lm

NAME	=	my_rpg

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(SFML_FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f codi*
	rm -f vgcore*

re: fclean all

Makefile += -j
