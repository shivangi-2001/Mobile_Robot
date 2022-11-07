// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_localization:srv/GetState.idl
// generated code does not contain a copyright notice
#include "robot_localization/srv/detail/get_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `time_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_localization__srv__GetState_Request__init(robot_localization__srv__GetState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->time_stamp)) {
    robot_localization__srv__GetState_Request__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    robot_localization__srv__GetState_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_localization__srv__GetState_Request__fini(robot_localization__srv__GetState_Request * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  builtin_interfaces__msg__Time__fini(&msg->time_stamp);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
}

bool
robot_localization__srv__GetState_Request__are_equal(const robot_localization__srv__GetState_Request * lhs, const robot_localization__srv__GetState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  return true;
}

bool
robot_localization__srv__GetState_Request__copy(
  const robot_localization__srv__GetState_Request * input,
  robot_localization__srv__GetState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  return true;
}

robot_localization__srv__GetState_Request *
robot_localization__srv__GetState_Request__create()
{
  robot_localization__srv__GetState_Request * msg = (robot_localization__srv__GetState_Request *)malloc(sizeof(robot_localization__srv__GetState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_localization__srv__GetState_Request));
  bool success = robot_localization__srv__GetState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_localization__srv__GetState_Request__destroy(robot_localization__srv__GetState_Request * msg)
{
  if (msg) {
    robot_localization__srv__GetState_Request__fini(msg);
  }
  free(msg);
}


bool
robot_localization__srv__GetState_Request__Sequence__init(robot_localization__srv__GetState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_localization__srv__GetState_Request * data = NULL;
  if (size) {
    data = (robot_localization__srv__GetState_Request *)calloc(size, sizeof(robot_localization__srv__GetState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_localization__srv__GetState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_localization__srv__GetState_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_localization__srv__GetState_Request__Sequence__fini(robot_localization__srv__GetState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_localization__srv__GetState_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_localization__srv__GetState_Request__Sequence *
robot_localization__srv__GetState_Request__Sequence__create(size_t size)
{
  robot_localization__srv__GetState_Request__Sequence * array = (robot_localization__srv__GetState_Request__Sequence *)malloc(sizeof(robot_localization__srv__GetState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_localization__srv__GetState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_localization__srv__GetState_Request__Sequence__destroy(robot_localization__srv__GetState_Request__Sequence * array)
{
  if (array) {
    robot_localization__srv__GetState_Request__Sequence__fini(array);
  }
  free(array);
}

bool
robot_localization__srv__GetState_Request__Sequence__are_equal(const robot_localization__srv__GetState_Request__Sequence * lhs, const robot_localization__srv__GetState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_localization__srv__GetState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_localization__srv__GetState_Request__Sequence__copy(
  const robot_localization__srv__GetState_Request__Sequence * input,
  robot_localization__srv__GetState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_localization__srv__GetState_Request);
    robot_localization__srv__GetState_Request * data =
      (robot_localization__srv__GetState_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_localization__srv__GetState_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robot_localization__srv__GetState_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_localization__srv__GetState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robot_localization__srv__GetState_Response__init(robot_localization__srv__GetState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // covariance
  return true;
}

void
robot_localization__srv__GetState_Response__fini(robot_localization__srv__GetState_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
  // covariance
}

bool
robot_localization__srv__GetState_Response__are_equal(const robot_localization__srv__GetState_Response * lhs, const robot_localization__srv__GetState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  for (size_t i = 0; i < 15; ++i) {
    if (lhs->state[i] != rhs->state[i]) {
      return false;
    }
  }
  // covariance
  for (size_t i = 0; i < 225; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
robot_localization__srv__GetState_Response__copy(
  const robot_localization__srv__GetState_Response * input,
  robot_localization__srv__GetState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  for (size_t i = 0; i < 15; ++i) {
    output->state[i] = input->state[i];
  }
  // covariance
  for (size_t i = 0; i < 225; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

robot_localization__srv__GetState_Response *
robot_localization__srv__GetState_Response__create()
{
  robot_localization__srv__GetState_Response * msg = (robot_localization__srv__GetState_Response *)malloc(sizeof(robot_localization__srv__GetState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_localization__srv__GetState_Response));
  bool success = robot_localization__srv__GetState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_localization__srv__GetState_Response__destroy(robot_localization__srv__GetState_Response * msg)
{
  if (msg) {
    robot_localization__srv__GetState_Response__fini(msg);
  }
  free(msg);
}


bool
robot_localization__srv__GetState_Response__Sequence__init(robot_localization__srv__GetState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_localization__srv__GetState_Response * data = NULL;
  if (size) {
    data = (robot_localization__srv__GetState_Response *)calloc(size, sizeof(robot_localization__srv__GetState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_localization__srv__GetState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_localization__srv__GetState_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_localization__srv__GetState_Response__Sequence__fini(robot_localization__srv__GetState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_localization__srv__GetState_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_localization__srv__GetState_Response__Sequence *
robot_localization__srv__GetState_Response__Sequence__create(size_t size)
{
  robot_localization__srv__GetState_Response__Sequence * array = (robot_localization__srv__GetState_Response__Sequence *)malloc(sizeof(robot_localization__srv__GetState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_localization__srv__GetState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_localization__srv__GetState_Response__Sequence__destroy(robot_localization__srv__GetState_Response__Sequence * array)
{
  if (array) {
    robot_localization__srv__GetState_Response__Sequence__fini(array);
  }
  free(array);
}

bool
robot_localization__srv__GetState_Response__Sequence__are_equal(const robot_localization__srv__GetState_Response__Sequence * lhs, const robot_localization__srv__GetState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_localization__srv__GetState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_localization__srv__GetState_Response__Sequence__copy(
  const robot_localization__srv__GetState_Response__Sequence * input,
  robot_localization__srv__GetState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_localization__srv__GetState_Response);
    robot_localization__srv__GetState_Response * data =
      (robot_localization__srv__GetState_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_localization__srv__GetState_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robot_localization__srv__GetState_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_localization__srv__GetState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
