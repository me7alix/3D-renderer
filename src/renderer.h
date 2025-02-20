#ifndef RENDERER_H_
#define RENDERER_H_

#include <raylib.h>
#include <raymath.h>
#include "render_model.h"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define MAX_TRIANGLES 25000

typedef struct {
  Vector3 pos;
  Vector3 ang;
  float fov;
} RenderCamera;

typedef struct {
  RenderModel rm;
  Image tx;
  int isTxUsing;
  Vector3 pos;
  Vector3 sc;
  Vector3 ang;
} RenderObject;

typedef struct {
  Vector2 p1, p2, p3;
  Vector3 n;
  Color clr;
  float distToCam;
} Triangle;

void set_sun_dir(Vector3 _sun_dir);
RenderCamera *get_current_camera();

void trs_draw();
void trs_init();
void trs_reset();

void draw_render_object(RenderObject *r);

#endif
