//
//  loop.c
//  Butter
//
//  Created by stephenwzl on 2018/5/10.
//  Copyright © 2018年 stephenw.cc. All rights reserved.
//

#include "loop.h"
#include <ev.h>
#include <stdio.h>
#include <libxml/parser.h>

butter_loop default_butter_loop = NULL;

static ev_async ui_watcher;

// predefine prototypes
void setup_ui_watcher(void);
static void ui_watcher_callback(EV_P_ ev_async *w, int revents);

butter_loop butter_main_loop(void)
{
  if (default_butter_loop == NULL) {
    default_butter_loop = EV_DEFAULT;
  }
  return default_butter_loop;
}

void setup_ui_watcher()
{
  ev_async_init(&ui_watcher, ui_watcher_callback);
  ev_async_start((struct ev_loop *)butter_main_loop(), &ui_watcher);
}

static void ui_watcher_callback(EV_P_ ev_async *w, int revents)
{
  // do ui parse & diff
}
