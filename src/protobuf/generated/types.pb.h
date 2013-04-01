// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: types.proto

#ifndef PROTOBUF_types_2eproto__INCLUDED
#define PROTOBUF_types_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_types_2eproto();
void protobuf_AssignDesc_types_2eproto();
void protobuf_ShutdownFile_types_2eproto();


enum ScalarType {
  HAL_BIT = 1,
  HAL_FLOAT = 2,
  HAL_S32 = 3,
  HAL_U32 = 4,
  BYTES = 10,
  INT32 = 20,
  UINT32 = 30,
  INT64 = 40,
  UINT64 = 50,
  DOUBLE = 60,
  STRING = 70,
  BOOL = 80
};
bool ScalarType_IsValid(int value);
const ScalarType ScalarType_MIN = HAL_BIT;
const ScalarType ScalarType_MAX = BOOL;
const int ScalarType_ARRAYSIZE = ScalarType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ScalarType_descriptor();
inline const ::std::string& ScalarType_Name(ScalarType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ScalarType_descriptor(), value);
}
inline bool ScalarType_Parse(
    const ::std::string& name, ScalarType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ScalarType>(
    ScalarType_descriptor(), name, value);
}
enum HalPinDirection {
  HAL_IN = 16,
  HAL_OUT = 32,
  HAL_IO = 48
};
bool HalPinDirection_IsValid(int value);
const HalPinDirection HalPinDirection_MIN = HAL_IN;
const HalPinDirection HalPinDirection_MAX = HAL_IO;
const int HalPinDirection_ARRAYSIZE = HalPinDirection_MAX + 1;

const ::google::protobuf::EnumDescriptor* HalPinDirection_descriptor();
inline const ::std::string& HalPinDirection_Name(HalPinDirection value) {
  return ::google::protobuf::internal::NameOfEnum(
    HalPinDirection_descriptor(), value);
}
inline bool HalPinDirection_Parse(
    const ::std::string& name, HalPinDirection* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HalPinDirection>(
    HalPinDirection_descriptor(), name, value);
}
enum HalParamDirection {
  HAL_RO = 64,
  HAL_RW = 192
};
bool HalParamDirection_IsValid(int value);
const HalParamDirection HalParamDirection_MIN = HAL_RO;
const HalParamDirection HalParamDirection_MAX = HAL_RW;
const int HalParamDirection_ARRAYSIZE = HalParamDirection_MAX + 1;

const ::google::protobuf::EnumDescriptor* HalParamDirection_descriptor();
inline const ::std::string& HalParamDirection_Name(HalParamDirection value) {
  return ::google::protobuf::internal::NameOfEnum(
    HalParamDirection_descriptor(), value);
}
inline bool HalParamDirection_Parse(
    const ::std::string& name, HalParamDirection* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HalParamDirection>(
    HalParamDirection_descriptor(), name, value);
}
enum ObjectType {
  VALUE = 1,
  INSTANCE = 3,
  ORIGINATOR = 5,
  HAL_PIN = 10,
  HAL_SIGNAL = 20,
  HAL_PARAM = 30,
  HAL_THREAD = 40,
  HAL_FUNCT = 50,
  HAL_COMPONENT = 70,
  HAL_RING = 80,
  HAL_GROUP = 90,
  HAL_MEMBER_SIGNAL = 100,
  HAL_MEMBER_PIN = 110
};
bool ObjectType_IsValid(int value);
const ObjectType ObjectType_MIN = VALUE;
const ObjectType ObjectType_MAX = HAL_MEMBER_PIN;
const int ObjectType_ARRAYSIZE = ObjectType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ObjectType_descriptor();
inline const ::std::string& ObjectType_Name(ObjectType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ObjectType_descriptor(), value);
}
inline bool ObjectType_Parse(
    const ::std::string& name, ObjectType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ObjectType>(
    ObjectType_descriptor(), name, value);
}
enum MsgLevel {
  RTAPI_MSG_NONE = 0,
  RTAPI_MSG_ERR = 1,
  RTAPI_MSG_WARN = 2,
  RTAPI_MSG_INFO = 3,
  RTAPI_MSG_DBG = 4,
  RTAPI_MSG_ALL = 5
};
bool MsgLevel_IsValid(int value);
const MsgLevel MsgLevel_MIN = RTAPI_MSG_NONE;
const MsgLevel MsgLevel_MAX = RTAPI_MSG_ALL;
const int MsgLevel_ARRAYSIZE = MsgLevel_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgLevel_descriptor();
inline const ::std::string& MsgLevel_Name(MsgLevel value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgLevel_descriptor(), value);
}
inline bool MsgLevel_Parse(
    const ::std::string& name, MsgLevel* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgLevel>(
    MsgLevel_descriptor(), name, value);
}
enum ReplyRequired {
  NONE = 0,
  ON_RECEPTION = 1,
  ON_QUEUED = 2,
  ON_COMPLETION = 4,
  ALL_STEPS = 255
};
bool ReplyRequired_IsValid(int value);
const ReplyRequired ReplyRequired_MIN = NONE;
const ReplyRequired ReplyRequired_MAX = ALL_STEPS;
const int ReplyRequired_ARRAYSIZE = ReplyRequired_MAX + 1;

const ::google::protobuf::EnumDescriptor* ReplyRequired_descriptor();
inline const ::std::string& ReplyRequired_Name(ReplyRequired value) {
  return ::google::protobuf::internal::NameOfEnum(
    ReplyRequired_descriptor(), value);
}
inline bool ReplyRequired_Parse(
    const ::std::string& name, ReplyRequired* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ReplyRequired>(
    ReplyRequired_descriptor(), name, value);
}
enum ReportCause {
  PERIODIC = 1,
  CHANGE_NOTIFY = 2
};
bool ReportCause_IsValid(int value);
const ReportCause ReportCause_MIN = PERIODIC;
const ReportCause ReportCause_MAX = CHANGE_NOTIFY;
const int ReportCause_ARRAYSIZE = ReportCause_MAX + 1;

const ::google::protobuf::EnumDescriptor* ReportCause_descriptor();
inline const ::std::string& ReportCause_Name(ReportCause value) {
  return ::google::protobuf::internal::NameOfEnum(
    ReportCause_descriptor(), value);
}
inline bool ReportCause_Parse(
    const ::std::string& name, ReportCause* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ReportCause>(
    ReportCause_descriptor(), name, value);
}
enum OriginDetail {
  UNIX_SIGNAL = 10,
  INSTANCE_SHUTDOWN = 20,
  ZMQ_SOCKET = 70,
  NML_LAYER = 80,
  RCS_LAYER = 90,
  CMS_LAYER = 100,
  IP_LAYER = 110,
  TCP_LAYER = 120,
  PGM_LAYER = 130
};
bool OriginDetail_IsValid(int value);
const OriginDetail OriginDetail_MIN = UNIX_SIGNAL;
const OriginDetail OriginDetail_MAX = PGM_LAYER;
const int OriginDetail_ARRAYSIZE = OriginDetail_MAX + 1;

const ::google::protobuf::EnumDescriptor* OriginDetail_descriptor();
inline const ::std::string& OriginDetail_Name(OriginDetail value) {
  return ::google::protobuf::internal::NameOfEnum(
    OriginDetail_descriptor(), value);
}
inline bool OriginDetail_Parse(
    const ::std::string& name, OriginDetail* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OriginDetail>(
    OriginDetail_descriptor(), name, value);
}
enum OriginType {
  PROCESS = 10,
  USER_THREAD = 20,
  RT_THREAD = 30,
  COMPONENT = 40,
  THREAD_FUNCTION = 50,
  COMPONENT_INIT = 60,
  COMPONENT_EXIT = 70,
  GROUP = 80,
  PIN = 90,
  SIGNAL = 100
};
bool OriginType_IsValid(int value);
const OriginType OriginType_MIN = PROCESS;
const OriginType OriginType_MAX = SIGNAL;
const int OriginType_ARRAYSIZE = OriginType_MAX + 1;

const ::google::protobuf::EnumDescriptor* OriginType_descriptor();
inline const ::std::string& OriginType_Name(OriginType value) {
  return ::google::protobuf::internal::NameOfEnum(
    OriginType_descriptor(), value);
}
inline bool OriginType_Parse(
    const ::std::string& name, OriginType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OriginType>(
    OriginType_descriptor(), name, value);
}
enum CmdType {
  PING = 10,
  REPORT = 3010,
  SET_HAL_SIGNAL = 3070,
  LINK_PINS = 3080,
  BIND_REQUEST = 4000,
  UNBIND_REQUEST = 4010,
  UPDATE = 4020,
  UNBIND_CONFIRM = 5000,
  BIND_CONFIRM = 5010
};
bool CmdType_IsValid(int value);
const CmdType CmdType_MIN = PING;
const CmdType CmdType_MAX = BIND_CONFIRM;
const int CmdType_ARRAYSIZE = CmdType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CmdType_descriptor();
inline const ::std::string& CmdType_Name(CmdType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CmdType_descriptor(), value);
}
inline bool CmdType_Parse(
    const ::std::string& name, CmdType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CmdType>(
    CmdType_descriptor(), name, value);
}
enum RespType {
  ACKNOWLEDGE = 10,
  REJECT = 20,
  DONE = 40
};
bool RespType_IsValid(int value);
const RespType RespType_MIN = ACKNOWLEDGE;
const RespType RespType_MAX = DONE;
const int RespType_ARRAYSIZE = RespType_MAX + 1;

const ::google::protobuf::EnumDescriptor* RespType_descriptor();
inline const ::std::string& RespType_Name(RespType value) {
  return ::google::protobuf::internal::NameOfEnum(
    RespType_descriptor(), value);
}
inline bool RespType_Parse(
    const ::std::string& name, RespType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RespType>(
    RespType_descriptor(), name, value);
}
enum StatusType {
  QUEUED = 1,
  PENDING = 2,
  COMPLETE = 3,
  ERROR = 4
};
bool StatusType_IsValid(int value);
const StatusType StatusType_MIN = QUEUED;
const StatusType StatusType_MAX = ERROR;
const int StatusType_ARRAYSIZE = StatusType_MAX + 1;

const ::google::protobuf::EnumDescriptor* StatusType_descriptor();
inline const ::std::string& StatusType_Name(StatusType value) {
  return ::google::protobuf::internal::NameOfEnum(
    StatusType_descriptor(), value);
}
inline bool StatusType_Parse(
    const ::std::string& name, StatusType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StatusType>(
    StatusType_descriptor(), name, value);
}
enum MsgType {
  MT_COMMAND = 4,
  MT_REPONSE = 5,
  MT_RTAPI_MESSAGE = 6,
  MT_NML = 7,
  MT_WOU = 8,
  MT_SYSLOG = 9,
  MT_ASCII = 100,
  MT_UNICODE = 101,
  MT_GCODE = 102,
  MT_PYTHON = 103,
  MT_PICKLE = 104,
  MT_TCL = 105,
  MT_XML = 106,
  MT_JSON = 107,
  MT_JPEG = 108,
  MT_PNG = 109,
  MT_TIFF = 110,
  MT_POSTSCRIPT = 111,
  MT_SVG = 112,
  MT_EMCMOT_LOWER = 1000,
  MT_EMCMOT_UPPER = 1100,
  MT_EMCMOT_ABORT = 1001,
  MT_EMCMOT_AXIS_ABORT = 1002,
  MT_EMCMOT_ENABLE = 1003,
  MT_EMCMOT_DISABLE = 1004,
  MT_EMCMOT_ENABLE_AMPLIFIER = 1005,
  MT_EMCMOT_DISABLE_AMPLIFIER = 1006,
  MT_EMCMOT_ENABLE_WATCHDOG = 1007,
  MT_EMCMOT_DISABLE_WATCHDOG = 1008,
  MT_EMCMOT_ACTIVATE_JOINT = 1009,
  MT_EMCMOT_DEACTIVATE_JOINT = 1010,
  MT_EMCMOT_PAUSE = 1011,
  MT_EMCMOT_RESUME = 1012,
  MT_EMCMOT_STEP = 1013,
  MT_EMCMOT_FREE = 1014,
  MT_EMCMOT_COORD = 1015,
  MT_EMCMOT_TELEOP = 1016,
  MT_EMCMOT_SPINDLE_SCALE = 1017,
  MT_EMCMOT_SS_ENABLE = 1018,
  MT_EMCMOT_FEED_SCALE = 1019,
  MT_EMCMOT_FS_ENABLE = 1020,
  MT_EMCMOT_FH_ENABLE = 1021,
  MT_EMCMOT_AF_ENABLE = 1022,
  MT_EMCMOT_OVERRIDE_LIMITS = 1023,
  MT_EMCMOT_HOME = 1024,
  MT_EMCMOT_UNHOME = 1025,
  MT_EMCMOT_JOG_CONT = 1026,
  MT_EMCMOT_JOG_INCR = 1027,
  MT_EMCMOT_JOG_ABS = 1028,
  MT_EMCMOT_SET_LINE = 1029,
  MT_EMCMOT_SET_CIRCLE = 1030,
  MT_EMCMOT_SET_TELEOP_VECTOR = 1031,
  MT_EMCMOT_CLEAR_PROBE_FLAGS = 1032,
  MT_EMCMOT_PROBE = 1033,
  MT_EMCMOT_RIGID_TAP = 1034,
  MT_EMCMOT_SET_POSITION_LIMITS = 1035,
  MT_EMCMOT_SET_BACKLASH = 1036,
  MT_EMCMOT_SET_MIN_FERROR = 1037,
  MT_EMCMOT_SET_MAX_FERROR = 1038,
  MT_EMCMOT_SET_VEL = 1039,
  MT_EMCMOT_SET_VEL_LIMIT = 1040,
  MT_EMCMOT_SET_JOINT_VEL_LIMIT = 1041,
  MT_EMCMOT_SET_JOINT_ACC_LIMIT = 1042,
  MT_EMCMOT_SET_ACC = 1043,
  MT_EMCMOT_SET_TERM_COND = 1044,
  MT_EMCMOT_SET_NUM_AXES = 1045,
  MT_EMCMOT_SET_WORLD_HOME = 1046,
  MT_EMCMOT_SET_HOMING_PARAMS = 1047,
  MT_EMCMOT_SET_DEBUG = 1048,
  MT_EMCMOT_SET_DOUT = 1049,
  MT_EMCMOT_SET_AOUT = 1050,
  MT_EMCMOT_SET_SPINDLESYNC = 1051,
  MT_EMCMOT_SPINDLE_ON = 1052,
  MT_EMCMOT_SPINDLE_OFF = 1053,
  MT_EMCMOT_SPINDLE_INCREASE = 1054,
  MT_EMCMOT_SPINDLE_DECREASE = 1055,
  MT_EMCMOT_SPINDLE_BRAKE_ENGAGE = 1056,
  MT_EMCMOT_SPINDLE_BRAKE_RELEASE = 1057,
  MT_EMCMOT_SET_MOTOR_OFFSET = 1058,
  MT_EMCMOT_SET_JOINT_COMP = 1059,
  MT_EMCMOT_SET_OFFSET = 1060,
  MT_EMCMOT_COMMAND_OK = 1061,
  MT_EMCMOT_COMMAND_UNKNOWN_COMMAND = 1062,
  MT_EMCMOT_COMMAND_INVALID_COMMAND = 1063,
  MT_EMCMOT_COMMAND_INVALID_PARAMS = 1064,
  MT_EMCMOT_COMMAND_BAD_EXEC = 1065,
  MT_EMCMOT_MOTION_DISABLED = 1066,
  MT_EMCMOT_MOTION_FREE = 1067,
  MT_EMCMOT_MOTION_TELEOP = 1068,
  MT_EMCMOT_MOTION_COORD = 1069,
  MT_EMCMOT_JOINT_FLAG = 1070,
  MT_EMCMOT_MOTION_FLAG = 1071,
  MT_PRU_FIRMWARE = 2048,
  MT_MESA_5I20_FIRMWARE = 3000,
  MT_BLOB = 4000,
  MT_TEST1 = 5001,
  MT_TEST2 = 5002,
  MT_TEST3 = 5003,
  MT_EMC_NML_LOWER = 10000,
  MT_EMC_NML_UPPER = 13000,
  MT_EMC_OPERATOR_ERROR_TYPE = 10011,
  MT_EMC_OPERATOR_TEXT_TYPE = 10012,
  MT_EMC_OPERATOR_DISPLAY_TYPE = 10013,
  MT_EMC_NULL_TYPE = 10021,
  MT_EMC_SET_DEBUG_TYPE = 10022,
  MT_EMC_SYSTEM_CMD_TYPE = 10030,
  MT_EMC_AXIS_SET_AXIS_TYPE = 10101,
  MT_EMC_AXIS_SET_UNITS_TYPE = 10102,
  MT_EMC_AXIS_SET_MIN_POSITION_LIMIT_TYPE = 10107,
  MT_EMC_AXIS_SET_MAX_POSITION_LIMIT_TYPE = 10108,
  MT_EMC_AXIS_SET_FERROR_TYPE = 10111,
  MT_EMC_AXIS_SET_HOMING_PARAMS_TYPE = 10112,
  MT_EMC_AXIS_SET_MIN_FERROR_TYPE = 10115,
  MT_EMC_AXIS_SET_MAX_VELOCITY_TYPE = 10116,
  MT_EMC_AXIS_INIT_TYPE = 10118,
  MT_EMC_AXIS_HALT_TYPE = 10119,
  MT_EMC_AXIS_ABORT_TYPE = 10120,
  MT_EMC_AXIS_ENABLE_TYPE = 10121,
  MT_EMC_AXIS_DISABLE_TYPE = 10122,
  MT_EMC_AXIS_HOME_TYPE = 10123,
  MT_EMC_AXIS_UNHOME_TYPE = 10135,
  MT_EMC_AXIS_JOG_TYPE = 10124,
  MT_EMC_AXIS_INCR_JOG_TYPE = 10125,
  MT_EMC_AXIS_ABS_JOG_TYPE = 10126,
  MT_EMC_AXIS_ACTIVATE_TYPE = 10127,
  MT_EMC_AXIS_DEACTIVATE_TYPE = 10128,
  MT_EMC_AXIS_OVERRIDE_LIMITS_TYPE = 10129,
  MT_EMC_AXIS_LOAD_COMP_TYPE = 10131,
  MT_EMC_AXIS_SET_BACKLASH_TYPE = 10134,
  MT_EMC_AXIS_STAT_TYPE = 10199,
  MT_EMC_TRAJ_SET_AXES_TYPE = 10201,
  MT_EMC_TRAJ_SET_UNITS_TYPE = 10202,
  MT_EMC_TRAJ_SET_CYCLE_TIME_TYPE = 10203,
  MT_EMC_TRAJ_SET_MODE_TYPE = 10204,
  MT_EMC_TRAJ_SET_VELOCITY_TYPE = 10205,
  MT_EMC_TRAJ_SET_ACCELERATION_TYPE = 10206,
  MT_EMC_TRAJ_SET_MAX_VELOCITY_TYPE = 10207,
  MT_EMC_TRAJ_SET_MAX_ACCELERATION_TYPE = 10208,
  MT_EMC_TRAJ_SET_SCALE_TYPE = 10209,
  MT_EMC_TRAJ_SET_MOTION_ID_TYPE = 10210,
  MT_EMC_TRAJ_INIT_TYPE = 10211,
  MT_EMC_TRAJ_HALT_TYPE = 10212,
  MT_EMC_TRAJ_ENABLE_TYPE = 10213,
  MT_EMC_TRAJ_DISABLE_TYPE = 10214,
  MT_EMC_TRAJ_ABORT_TYPE = 10215,
  MT_EMC_TRAJ_PAUSE_TYPE = 10216,
  MT_EMC_TRAJ_STEP_TYPE = 10217,
  MT_EMC_TRAJ_RESUME_TYPE = 10218,
  MT_EMC_TRAJ_DELAY_TYPE = 10219,
  MT_EMC_TRAJ_LINEAR_MOVE_TYPE = 10220,
  MT_EMC_TRAJ_CIRCULAR_MOVE_TYPE = 10221,
  MT_EMC_TRAJ_SET_TERM_COND_TYPE = 10222,
  MT_EMC_TRAJ_SET_OFFSET_TYPE = 10223,
  MT_EMC_TRAJ_SET_G5X_TYPE = 10224,
  MT_EMC_TRAJ_SET_HOME_TYPE = 10225,
  MT_EMC_TRAJ_SET_ROTATION_TYPE = 10226,
  MT_EMC_TRAJ_SET_G92_TYPE = 10227,
  MT_EMC_TRAJ_CLEAR_PROBE_TRIPPED_FLAG_TYPE = 10228,
  MT_EMC_TRAJ_PROBE_TYPE = 10229,
  MT_EMC_TRAJ_SET_TELEOP_ENABLE_TYPE = 10230,
  MT_EMC_TRAJ_SET_TELEOP_VECTOR_TYPE = 10231,
  MT_EMC_TRAJ_SET_SPINDLESYNC_TYPE = 10232,
  MT_EMC_TRAJ_SET_SPINDLE_SCALE_TYPE = 10233,
  MT_EMC_TRAJ_SET_FO_ENABLE_TYPE = 10234,
  MT_EMC_TRAJ_SET_SO_ENABLE_TYPE = 10235,
  MT_EMC_TRAJ_SET_FH_ENABLE_TYPE = 10236,
  MT_EMC_TRAJ_RIGID_TAP_TYPE = 10237,
  MT_EMC_TRAJ_STAT_TYPE = 10299,
  MT_EMC_MOTION_INIT_TYPE = 10301,
  MT_EMC_MOTION_HALT_TYPE = 10302,
  MT_EMC_MOTION_ABORT_TYPE = 10303,
  MT_EMC_MOTION_SET_AOUT_TYPE = 10304,
  MT_EMC_MOTION_SET_DOUT_TYPE = 10305,
  MT_EMC_MOTION_ADAPTIVE_TYPE = 10306,
  MT_EMC_MOTION_STAT_TYPE = 10399,
  MT_EMC_TASK_INIT_TYPE = 10501,
  MT_EMC_TASK_HALT_TYPE = 10502,
  MT_EMC_TASK_ABORT_TYPE = 10503,
  MT_EMC_TASK_SET_MODE_TYPE = 10504,
  MT_EMC_TASK_SET_STATE_TYPE = 10505,
  MT_EMC_TASK_PLAN_OPEN_TYPE = 10506,
  MT_EMC_TASK_PLAN_RUN_TYPE = 10507,
  MT_EMC_TASK_PLAN_READ_TYPE = 10508,
  MT_EMC_TASK_PLAN_EXECUTE_TYPE = 10509,
  MT_EMC_TASK_PLAN_PAUSE_TYPE = 10510,
  MT_EMC_TASK_PLAN_STEP_TYPE = 10511,
  MT_EMC_TASK_PLAN_RESUME_TYPE = 10512,
  MT_EMC_TASK_PLAN_END_TYPE = 10513,
  MT_EMC_TASK_PLAN_CLOSE_TYPE = 10514,
  MT_EMC_TASK_PLAN_INIT_TYPE = 10515,
  MT_EMC_TASK_PLAN_SYNCH_TYPE = 10516,
  MT_EMC_TASK_PLAN_SET_OPTIONAL_STOP_TYPE = 10517,
  MT_EMC_TASK_PLAN_SET_BLOCK_DELETE_TYPE = 10518,
  MT_EMC_TASK_PLAN_OPTIONAL_STOP_TYPE = 10519,
  MT_EMC_TASK_STAT_TYPE = 10599,
  MT_EMC_TOOL_INIT_TYPE = 11101,
  MT_EMC_TOOL_HALT_TYPE = 11102,
  MT_EMC_TOOL_ABORT_TYPE = 11103,
  MT_EMC_TOOL_PREPARE_TYPE = 11104,
  MT_EMC_TOOL_LOAD_TYPE = 11105,
  MT_EMC_TOOL_UNLOAD_TYPE = 11106,
  MT_EMC_TOOL_LOAD_TOOL_TABLE_TYPE = 11107,
  MT_EMC_TOOL_SET_OFFSET_TYPE = 11108,
  MT_EMC_TOOL_SET_NUMBER_TYPE = 11109,
  MT_EMC_TOOL_STAT_TYPE = 11199,
  MT_EMC_AUX_ESTOP_ON_TYPE = 11206,
  MT_EMC_AUX_ESTOP_OFF_TYPE = 11207,
  MT_EMC_AUX_ESTOP_RESET_TYPE = 11208,
  MT_EMC_AUX_INPUT_WAIT_TYPE = 11209,
  MT_EMC_AUX_STAT_TYPE = 11299,
  MT_EMC_SPINDLE_ON_TYPE = 11304,
  MT_EMC_SPINDLE_OFF_TYPE = 11305,
  MT_EMC_SPINDLE_INCREASE_TYPE = 11309,
  MT_EMC_SPINDLE_DECREASE_TYPE = 11310,
  MT_EMC_SPINDLE_CONSTANT_TYPE = 11311,
  MT_EMC_SPINDLE_BRAKE_RELEASE_TYPE = 11312,
  MT_EMC_SPINDLE_BRAKE_ENGAGE_TYPE = 11313,
  MT_EMC_SPINDLE_SPEED_TYPE = 11316,
  MT_EMC_SPINDLE_STAT_TYPE = 11399,
  MT_EMC_COOLANT_MIST_ON_TYPE = 11404,
  MT_EMC_COOLANT_MIST_OFF_TYPE = 11405,
  MT_EMC_COOLANT_FLOOD_ON_TYPE = 11406,
  MT_EMC_COOLANT_FLOOD_OFF_TYPE = 11407,
  MT_EMC_COOLANT_STAT_TYPE = 11499,
  MT_EMC_LUBE_ON_TYPE = 11504,
  MT_EMC_LUBE_OFF_TYPE = 11505,
  MT_EMC_LUBE_STAT_TYPE = 11599,
  MT_EMC_IO_INIT_TYPE = 11601,
  MT_EMC_IO_HALT_TYPE = 11602,
  MT_EMC_IO_ABORT_TYPE = 11603,
  MT_EMC_IO_SET_CYCLE_TIME_TYPE = 11604,
  MT_EMC_IO_STAT_TYPE = 11699,
  MT_EMC_INIT_TYPE = 11901,
  MT_EMC_HALT_TYPE = 11902,
  MT_EMC_ABORT_TYPE = 11903,
  MT_EMC_STAT_TYPE = 11999
};
bool MsgType_IsValid(int value);
const MsgType MsgType_MIN = MT_COMMAND;
const MsgType MsgType_MAX = MT_EMC_NML_UPPER;
const int MsgType_ARRAYSIZE = MsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgType_descriptor();
inline const ::std::string& MsgType_Name(MsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgType_descriptor(), value);
}
inline bool MsgType_Parse(
    const ::std::string& name, MsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgType>(
    MsgType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ScalarType>() {
  return ::ScalarType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::HalPinDirection>() {
  return ::HalPinDirection_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::HalParamDirection>() {
  return ::HalParamDirection_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ObjectType>() {
  return ::ObjectType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MsgLevel>() {
  return ::MsgLevel_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ReplyRequired>() {
  return ::ReplyRequired_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ReportCause>() {
  return ::ReportCause_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OriginDetail>() {
  return ::OriginDetail_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OriginType>() {
  return ::OriginType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::CmdType>() {
  return ::CmdType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::RespType>() {
  return ::RespType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::StatusType>() {
  return ::StatusType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MsgType>() {
  return ::MsgType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_types_2eproto__INCLUDED
