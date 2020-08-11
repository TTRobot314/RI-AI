// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_game_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_game_5fevent_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_game_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_game_5fevent_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_game_5fevent_2eproto;
class SSL_Referee_Game_Event;
class SSL_Referee_Game_EventDefaultTypeInternal;
extern SSL_Referee_Game_EventDefaultTypeInternal _SSL_Referee_Game_Event_default_instance_;
class SSL_Referee_Game_Event_Originator;
class SSL_Referee_Game_Event_OriginatorDefaultTypeInternal;
extern SSL_Referee_Game_Event_OriginatorDefaultTypeInternal _SSL_Referee_Game_Event_Originator_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::SSL_Referee_Game_Event* Arena::CreateMaybeMessage<::SSL_Referee_Game_Event>(Arena*);
template<> ::SSL_Referee_Game_Event_Originator* Arena::CreateMaybeMessage<::SSL_Referee_Game_Event_Originator>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum SSL_Referee_Game_Event_GameEventType : int {
  SSL_Referee_Game_Event_GameEventType_UNKNOWN = 0,
  SSL_Referee_Game_Event_GameEventType_CUSTOM = 1,
  SSL_Referee_Game_Event_GameEventType_NUMBER_OF_PLAYERS = 2,
  SSL_Referee_Game_Event_GameEventType_BALL_LEFT_FIELD = 3,
  SSL_Referee_Game_Event_GameEventType_GOAL = 4,
  SSL_Referee_Game_Event_GameEventType_KICK_TIMEOUT = 5,
  SSL_Referee_Game_Event_GameEventType_NO_PROGRESS_IN_GAME = 6,
  SSL_Referee_Game_Event_GameEventType_BOT_COLLISION = 7,
  SSL_Referee_Game_Event_GameEventType_MULTIPLE_DEFENDER = 8,
  SSL_Referee_Game_Event_GameEventType_MULTIPLE_DEFENDER_PARTIALLY = 9,
  SSL_Referee_Game_Event_GameEventType_ATTACKER_IN_DEFENSE_AREA = 10,
  SSL_Referee_Game_Event_GameEventType_ICING = 11,
  SSL_Referee_Game_Event_GameEventType_BALL_SPEED = 12,
  SSL_Referee_Game_Event_GameEventType_ROBOT_STOP_SPEED = 13,
  SSL_Referee_Game_Event_GameEventType_BALL_DRIBBLING = 14,
  SSL_Referee_Game_Event_GameEventType_ATTACKER_TOUCH_KEEPER = 15,
  SSL_Referee_Game_Event_GameEventType_DOUBLE_TOUCH = 16,
  SSL_Referee_Game_Event_GameEventType_ATTACKER_TO_DEFENCE_AREA = 17,
  SSL_Referee_Game_Event_GameEventType_DEFENDER_TO_KICK_POINT_DISTANCE = 18,
  SSL_Referee_Game_Event_GameEventType_BALL_HOLDING = 19,
  SSL_Referee_Game_Event_GameEventType_INDIRECT_GOAL = 20,
  SSL_Referee_Game_Event_GameEventType_BALL_PLACEMENT_FAILED = 21,
  SSL_Referee_Game_Event_GameEventType_CHIP_ON_GOAL = 22
};
bool SSL_Referee_Game_Event_GameEventType_IsValid(int value);
constexpr SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event_GameEventType_GameEventType_MIN = SSL_Referee_Game_Event_GameEventType_UNKNOWN;
constexpr SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event_GameEventType_GameEventType_MAX = SSL_Referee_Game_Event_GameEventType_CHIP_ON_GOAL;
constexpr int SSL_Referee_Game_Event_GameEventType_GameEventType_ARRAYSIZE = SSL_Referee_Game_Event_GameEventType_GameEventType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SSL_Referee_Game_Event_GameEventType_descriptor();
template<typename T>
inline const std::string& SSL_Referee_Game_Event_GameEventType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SSL_Referee_Game_Event_GameEventType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SSL_Referee_Game_Event_GameEventType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SSL_Referee_Game_Event_GameEventType_descriptor(), enum_t_value);
}
inline bool SSL_Referee_Game_Event_GameEventType_Parse(
    const std::string& name, SSL_Referee_Game_Event_GameEventType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SSL_Referee_Game_Event_GameEventType>(
    SSL_Referee_Game_Event_GameEventType_descriptor(), name, value);
}
enum SSL_Referee_Game_Event_Team : int {
  SSL_Referee_Game_Event_Team_TEAM_UNKNOWN = 0,
  SSL_Referee_Game_Event_Team_TEAM_YELLOW = 1,
  SSL_Referee_Game_Event_Team_TEAM_BLUE = 2
};
bool SSL_Referee_Game_Event_Team_IsValid(int value);
constexpr SSL_Referee_Game_Event_Team SSL_Referee_Game_Event_Team_Team_MIN = SSL_Referee_Game_Event_Team_TEAM_UNKNOWN;
constexpr SSL_Referee_Game_Event_Team SSL_Referee_Game_Event_Team_Team_MAX = SSL_Referee_Game_Event_Team_TEAM_BLUE;
constexpr int SSL_Referee_Game_Event_Team_Team_ARRAYSIZE = SSL_Referee_Game_Event_Team_Team_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SSL_Referee_Game_Event_Team_descriptor();
template<typename T>
inline const std::string& SSL_Referee_Game_Event_Team_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SSL_Referee_Game_Event_Team>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SSL_Referee_Game_Event_Team_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SSL_Referee_Game_Event_Team_descriptor(), enum_t_value);
}
inline bool SSL_Referee_Game_Event_Team_Parse(
    const std::string& name, SSL_Referee_Game_Event_Team* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SSL_Referee_Game_Event_Team>(
    SSL_Referee_Game_Event_Team_descriptor(), name, value);
}
// ===================================================================

class SSL_Referee_Game_Event_Originator PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SSL_Referee_Game_Event.Originator) */ {
 public:
  inline SSL_Referee_Game_Event_Originator() : SSL_Referee_Game_Event_Originator(nullptr) {};
  virtual ~SSL_Referee_Game_Event_Originator();

  SSL_Referee_Game_Event_Originator(const SSL_Referee_Game_Event_Originator& from);
  SSL_Referee_Game_Event_Originator(SSL_Referee_Game_Event_Originator&& from) noexcept
    : SSL_Referee_Game_Event_Originator() {
    *this = ::std::move(from);
  }

  inline SSL_Referee_Game_Event_Originator& operator=(const SSL_Referee_Game_Event_Originator& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSL_Referee_Game_Event_Originator& operator=(SSL_Referee_Game_Event_Originator&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SSL_Referee_Game_Event_Originator& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSL_Referee_Game_Event_Originator* internal_default_instance() {
    return reinterpret_cast<const SSL_Referee_Game_Event_Originator*>(
               &_SSL_Referee_Game_Event_Originator_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SSL_Referee_Game_Event_Originator& a, SSL_Referee_Game_Event_Originator& b) {
    a.Swap(&b);
  }
  inline void Swap(SSL_Referee_Game_Event_Originator* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SSL_Referee_Game_Event_Originator* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSL_Referee_Game_Event_Originator* New() const final {
    return CreateMaybeMessage<SSL_Referee_Game_Event_Originator>(nullptr);
  }

  SSL_Referee_Game_Event_Originator* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSL_Referee_Game_Event_Originator>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SSL_Referee_Game_Event_Originator& from);
  void MergeFrom(const SSL_Referee_Game_Event_Originator& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SSL_Referee_Game_Event_Originator* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SSL_Referee_Game_Event.Originator";
  }
  protected:
  explicit SSL_Referee_Game_Event_Originator(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_game_5fevent_2eproto);
    return ::descriptor_table_game_5fevent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTeamFieldNumber = 1,
    kBotIdFieldNumber = 2,
  };
  // required .SSL_Referee_Game_Event.Team team = 1;
  bool has_team() const;
  private:
  bool _internal_has_team() const;
  public:
  void clear_team();
  ::SSL_Referee_Game_Event_Team team() const;
  void set_team(::SSL_Referee_Game_Event_Team value);
  private:
  ::SSL_Referee_Game_Event_Team _internal_team() const;
  void _internal_set_team(::SSL_Referee_Game_Event_Team value);
  public:

  // optional uint32 botId = 2;
  bool has_botid() const;
  private:
  bool _internal_has_botid() const;
  public:
  void clear_botid();
  ::PROTOBUF_NAMESPACE_ID::uint32 botid() const;
  void set_botid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_botid() const;
  void _internal_set_botid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:SSL_Referee_Game_Event.Originator)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int team_;
  ::PROTOBUF_NAMESPACE_ID::uint32 botid_;
  friend struct ::TableStruct_game_5fevent_2eproto;
};
// -------------------------------------------------------------------

class SSL_Referee_Game_Event PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SSL_Referee_Game_Event) */ {
 public:
  inline SSL_Referee_Game_Event() : SSL_Referee_Game_Event(nullptr) {};
  virtual ~SSL_Referee_Game_Event();

  SSL_Referee_Game_Event(const SSL_Referee_Game_Event& from);
  SSL_Referee_Game_Event(SSL_Referee_Game_Event&& from) noexcept
    : SSL_Referee_Game_Event() {
    *this = ::std::move(from);
  }

  inline SSL_Referee_Game_Event& operator=(const SSL_Referee_Game_Event& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSL_Referee_Game_Event& operator=(SSL_Referee_Game_Event&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SSL_Referee_Game_Event& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSL_Referee_Game_Event* internal_default_instance() {
    return reinterpret_cast<const SSL_Referee_Game_Event*>(
               &_SSL_Referee_Game_Event_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SSL_Referee_Game_Event& a, SSL_Referee_Game_Event& b) {
    a.Swap(&b);
  }
  inline void Swap(SSL_Referee_Game_Event* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SSL_Referee_Game_Event* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSL_Referee_Game_Event* New() const final {
    return CreateMaybeMessage<SSL_Referee_Game_Event>(nullptr);
  }

  SSL_Referee_Game_Event* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSL_Referee_Game_Event>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SSL_Referee_Game_Event& from);
  void MergeFrom(const SSL_Referee_Game_Event& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SSL_Referee_Game_Event* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SSL_Referee_Game_Event";
  }
  protected:
  explicit SSL_Referee_Game_Event(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_game_5fevent_2eproto);
    return ::descriptor_table_game_5fevent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef SSL_Referee_Game_Event_Originator Originator;

  typedef SSL_Referee_Game_Event_GameEventType GameEventType;
  static constexpr GameEventType UNKNOWN =
    SSL_Referee_Game_Event_GameEventType_UNKNOWN;
  static constexpr GameEventType CUSTOM =
    SSL_Referee_Game_Event_GameEventType_CUSTOM;
  static constexpr GameEventType NUMBER_OF_PLAYERS =
    SSL_Referee_Game_Event_GameEventType_NUMBER_OF_PLAYERS;
  static constexpr GameEventType BALL_LEFT_FIELD =
    SSL_Referee_Game_Event_GameEventType_BALL_LEFT_FIELD;
  static constexpr GameEventType GOAL =
    SSL_Referee_Game_Event_GameEventType_GOAL;
  static constexpr GameEventType KICK_TIMEOUT =
    SSL_Referee_Game_Event_GameEventType_KICK_TIMEOUT;
  static constexpr GameEventType NO_PROGRESS_IN_GAME =
    SSL_Referee_Game_Event_GameEventType_NO_PROGRESS_IN_GAME;
  static constexpr GameEventType BOT_COLLISION =
    SSL_Referee_Game_Event_GameEventType_BOT_COLLISION;
  static constexpr GameEventType MULTIPLE_DEFENDER =
    SSL_Referee_Game_Event_GameEventType_MULTIPLE_DEFENDER;
  static constexpr GameEventType MULTIPLE_DEFENDER_PARTIALLY =
    SSL_Referee_Game_Event_GameEventType_MULTIPLE_DEFENDER_PARTIALLY;
  static constexpr GameEventType ATTACKER_IN_DEFENSE_AREA =
    SSL_Referee_Game_Event_GameEventType_ATTACKER_IN_DEFENSE_AREA;
  static constexpr GameEventType ICING =
    SSL_Referee_Game_Event_GameEventType_ICING;
  static constexpr GameEventType BALL_SPEED =
    SSL_Referee_Game_Event_GameEventType_BALL_SPEED;
  static constexpr GameEventType ROBOT_STOP_SPEED =
    SSL_Referee_Game_Event_GameEventType_ROBOT_STOP_SPEED;
  static constexpr GameEventType BALL_DRIBBLING =
    SSL_Referee_Game_Event_GameEventType_BALL_DRIBBLING;
  static constexpr GameEventType ATTACKER_TOUCH_KEEPER =
    SSL_Referee_Game_Event_GameEventType_ATTACKER_TOUCH_KEEPER;
  static constexpr GameEventType DOUBLE_TOUCH =
    SSL_Referee_Game_Event_GameEventType_DOUBLE_TOUCH;
  static constexpr GameEventType ATTACKER_TO_DEFENCE_AREA =
    SSL_Referee_Game_Event_GameEventType_ATTACKER_TO_DEFENCE_AREA;
  static constexpr GameEventType DEFENDER_TO_KICK_POINT_DISTANCE =
    SSL_Referee_Game_Event_GameEventType_DEFENDER_TO_KICK_POINT_DISTANCE;
  static constexpr GameEventType BALL_HOLDING =
    SSL_Referee_Game_Event_GameEventType_BALL_HOLDING;
  static constexpr GameEventType INDIRECT_GOAL =
    SSL_Referee_Game_Event_GameEventType_INDIRECT_GOAL;
  static constexpr GameEventType BALL_PLACEMENT_FAILED =
    SSL_Referee_Game_Event_GameEventType_BALL_PLACEMENT_FAILED;
  static constexpr GameEventType CHIP_ON_GOAL =
    SSL_Referee_Game_Event_GameEventType_CHIP_ON_GOAL;
  static inline bool GameEventType_IsValid(int value) {
    return SSL_Referee_Game_Event_GameEventType_IsValid(value);
  }
  static constexpr GameEventType GameEventType_MIN =
    SSL_Referee_Game_Event_GameEventType_GameEventType_MIN;
  static constexpr GameEventType GameEventType_MAX =
    SSL_Referee_Game_Event_GameEventType_GameEventType_MAX;
  static constexpr int GameEventType_ARRAYSIZE =
    SSL_Referee_Game_Event_GameEventType_GameEventType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  GameEventType_descriptor() {
    return SSL_Referee_Game_Event_GameEventType_descriptor();
  }
  template<typename T>
  static inline const std::string& GameEventType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, GameEventType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function GameEventType_Name.");
    return SSL_Referee_Game_Event_GameEventType_Name(enum_t_value);
  }
  static inline bool GameEventType_Parse(const std::string& name,
      GameEventType* value) {
    return SSL_Referee_Game_Event_GameEventType_Parse(name, value);
  }

  typedef SSL_Referee_Game_Event_Team Team;
  static constexpr Team TEAM_UNKNOWN =
    SSL_Referee_Game_Event_Team_TEAM_UNKNOWN;
  static constexpr Team TEAM_YELLOW =
    SSL_Referee_Game_Event_Team_TEAM_YELLOW;
  static constexpr Team TEAM_BLUE =
    SSL_Referee_Game_Event_Team_TEAM_BLUE;
  static inline bool Team_IsValid(int value) {
    return SSL_Referee_Game_Event_Team_IsValid(value);
  }
  static constexpr Team Team_MIN =
    SSL_Referee_Game_Event_Team_Team_MIN;
  static constexpr Team Team_MAX =
    SSL_Referee_Game_Event_Team_Team_MAX;
  static constexpr int Team_ARRAYSIZE =
    SSL_Referee_Game_Event_Team_Team_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Team_descriptor() {
    return SSL_Referee_Game_Event_Team_descriptor();
  }
  template<typename T>
  static inline const std::string& Team_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Team>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Team_Name.");
    return SSL_Referee_Game_Event_Team_Name(enum_t_value);
  }
  static inline bool Team_Parse(const std::string& name,
      Team* value) {
    return SSL_Referee_Game_Event_Team_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 3,
    kOriginatorFieldNumber = 2,
    kGameEventTypeFieldNumber = 1,
  };
  // optional string message = 3;
  bool has_message() const;
  private:
  bool _internal_has_message() const;
  public:
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_message();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_message(
      std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // optional .SSL_Referee_Game_Event.Originator originator = 2;
  bool has_originator() const;
  private:
  bool _internal_has_originator() const;
  public:
  void clear_originator();
  const ::SSL_Referee_Game_Event_Originator& originator() const;
  ::SSL_Referee_Game_Event_Originator* release_originator();
  ::SSL_Referee_Game_Event_Originator* mutable_originator();
  void set_allocated_originator(::SSL_Referee_Game_Event_Originator* originator);
  private:
  const ::SSL_Referee_Game_Event_Originator& _internal_originator() const;
  ::SSL_Referee_Game_Event_Originator* _internal_mutable_originator();
  public:
  void unsafe_arena_set_allocated_originator(
      ::SSL_Referee_Game_Event_Originator* originator);
  ::SSL_Referee_Game_Event_Originator* unsafe_arena_release_originator();

  // required .SSL_Referee_Game_Event.GameEventType gameEventType = 1;
  bool has_gameeventtype() const;
  private:
  bool _internal_has_gameeventtype() const;
  public:
  void clear_gameeventtype();
  ::SSL_Referee_Game_Event_GameEventType gameeventtype() const;
  void set_gameeventtype(::SSL_Referee_Game_Event_GameEventType value);
  private:
  ::SSL_Referee_Game_Event_GameEventType _internal_gameeventtype() const;
  void _internal_set_gameeventtype(::SSL_Referee_Game_Event_GameEventType value);
  public:

  // @@protoc_insertion_point(class_scope:SSL_Referee_Game_Event)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::SSL_Referee_Game_Event_Originator* originator_;
  int gameeventtype_;
  friend struct ::TableStruct_game_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SSL_Referee_Game_Event_Originator

// required .SSL_Referee_Game_Event.Team team = 1;
inline bool SSL_Referee_Game_Event_Originator::_internal_has_team() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SSL_Referee_Game_Event_Originator::has_team() const {
  return _internal_has_team();
}
inline void SSL_Referee_Game_Event_Originator::clear_team() {
  team_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::SSL_Referee_Game_Event_Team SSL_Referee_Game_Event_Originator::_internal_team() const {
  return static_cast< ::SSL_Referee_Game_Event_Team >(team_);
}
inline ::SSL_Referee_Game_Event_Team SSL_Referee_Game_Event_Originator::team() const {
  // @@protoc_insertion_point(field_get:SSL_Referee_Game_Event.Originator.team)
  return _internal_team();
}
inline void SSL_Referee_Game_Event_Originator::_internal_set_team(::SSL_Referee_Game_Event_Team value) {
  assert(::SSL_Referee_Game_Event_Team_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  team_ = value;
}
inline void SSL_Referee_Game_Event_Originator::set_team(::SSL_Referee_Game_Event_Team value) {
  _internal_set_team(value);
  // @@protoc_insertion_point(field_set:SSL_Referee_Game_Event.Originator.team)
}

// optional uint32 botId = 2;
inline bool SSL_Referee_Game_Event_Originator::_internal_has_botid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool SSL_Referee_Game_Event_Originator::has_botid() const {
  return _internal_has_botid();
}
inline void SSL_Referee_Game_Event_Originator::clear_botid() {
  botid_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SSL_Referee_Game_Event_Originator::_internal_botid() const {
  return botid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SSL_Referee_Game_Event_Originator::botid() const {
  // @@protoc_insertion_point(field_get:SSL_Referee_Game_Event.Originator.botId)
  return _internal_botid();
}
inline void SSL_Referee_Game_Event_Originator::_internal_set_botid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  botid_ = value;
}
inline void SSL_Referee_Game_Event_Originator::set_botid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_botid(value);
  // @@protoc_insertion_point(field_set:SSL_Referee_Game_Event.Originator.botId)
}

// -------------------------------------------------------------------

// SSL_Referee_Game_Event

// required .SSL_Referee_Game_Event.GameEventType gameEventType = 1;
inline bool SSL_Referee_Game_Event::_internal_has_gameeventtype() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool SSL_Referee_Game_Event::has_gameeventtype() const {
  return _internal_has_gameeventtype();
}
inline void SSL_Referee_Game_Event::clear_gameeventtype() {
  gameeventtype_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::_internal_gameeventtype() const {
  return static_cast< ::SSL_Referee_Game_Event_GameEventType >(gameeventtype_);
}
inline ::SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::gameeventtype() const {
  // @@protoc_insertion_point(field_get:SSL_Referee_Game_Event.gameEventType)
  return _internal_gameeventtype();
}
inline void SSL_Referee_Game_Event::_internal_set_gameeventtype(::SSL_Referee_Game_Event_GameEventType value) {
  assert(::SSL_Referee_Game_Event_GameEventType_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  gameeventtype_ = value;
}
inline void SSL_Referee_Game_Event::set_gameeventtype(::SSL_Referee_Game_Event_GameEventType value) {
  _internal_set_gameeventtype(value);
  // @@protoc_insertion_point(field_set:SSL_Referee_Game_Event.gameEventType)
}

// optional .SSL_Referee_Game_Event.Originator originator = 2;
inline bool SSL_Referee_Game_Event::_internal_has_originator() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || originator_ != nullptr);
  return value;
}
inline bool SSL_Referee_Game_Event::has_originator() const {
  return _internal_has_originator();
}
inline void SSL_Referee_Game_Event::clear_originator() {
  if (originator_ != nullptr) originator_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::SSL_Referee_Game_Event_Originator& SSL_Referee_Game_Event::_internal_originator() const {
  const ::SSL_Referee_Game_Event_Originator* p = originator_;
  return p != nullptr ? *p : *reinterpret_cast<const ::SSL_Referee_Game_Event_Originator*>(
      &::_SSL_Referee_Game_Event_Originator_default_instance_);
}
inline const ::SSL_Referee_Game_Event_Originator& SSL_Referee_Game_Event::originator() const {
  // @@protoc_insertion_point(field_get:SSL_Referee_Game_Event.originator)
  return _internal_originator();
}
inline void SSL_Referee_Game_Event::unsafe_arena_set_allocated_originator(
    ::SSL_Referee_Game_Event_Originator* originator) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(originator_);
  }
  originator_ = originator;
  if (originator) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SSL_Referee_Game_Event.originator)
}
inline ::SSL_Referee_Game_Event_Originator* SSL_Referee_Game_Event::release_originator() {
  auto temp = unsafe_arena_release_originator();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::SSL_Referee_Game_Event_Originator* SSL_Referee_Game_Event::unsafe_arena_release_originator() {
  // @@protoc_insertion_point(field_release:SSL_Referee_Game_Event.originator)
  _has_bits_[0] &= ~0x00000002u;
  ::SSL_Referee_Game_Event_Originator* temp = originator_;
  originator_ = nullptr;
  return temp;
}
inline ::SSL_Referee_Game_Event_Originator* SSL_Referee_Game_Event::_internal_mutable_originator() {
  _has_bits_[0] |= 0x00000002u;
  if (originator_ == nullptr) {
    auto* p = CreateMaybeMessage<::SSL_Referee_Game_Event_Originator>(GetArena());
    originator_ = p;
  }
  return originator_;
}
inline ::SSL_Referee_Game_Event_Originator* SSL_Referee_Game_Event::mutable_originator() {
  // @@protoc_insertion_point(field_mutable:SSL_Referee_Game_Event.originator)
  return _internal_mutable_originator();
}
inline void SSL_Referee_Game_Event::set_allocated_originator(::SSL_Referee_Game_Event_Originator* originator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete originator_;
  }
  if (originator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(originator);
    if (message_arena != submessage_arena) {
      originator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, originator, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  originator_ = originator;
  // @@protoc_insertion_point(field_set_allocated:SSL_Referee_Game_Event.originator)
}

// optional string message = 3;
inline bool SSL_Referee_Game_Event::_internal_has_message() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SSL_Referee_Game_Event::has_message() const {
  return _internal_has_message();
}
inline void SSL_Referee_Game_Event::clear_message() {
  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SSL_Referee_Game_Event::message() const {
  // @@protoc_insertion_point(field_get:SSL_Referee_Game_Event.message)
  return _internal_message();
}
inline void SSL_Referee_Game_Event::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:SSL_Referee_Game_Event.message)
}
inline std::string* SSL_Referee_Game_Event::mutable_message() {
  // @@protoc_insertion_point(field_mutable:SSL_Referee_Game_Event.message)
  return _internal_mutable_message();
}
inline const std::string& SSL_Referee_Game_Event::_internal_message() const {
  return message_.Get();
}
inline void SSL_Referee_Game_Event::_internal_set_message(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SSL_Referee_Game_Event::set_message(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  message_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SSL_Referee_Game_Event.message)
}
inline void SSL_Referee_Game_Event::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:SSL_Referee_Game_Event.message)
}
inline void SSL_Referee_Game_Event::set_message(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SSL_Referee_Game_Event.message)
}
inline std::string* SSL_Referee_Game_Event::_internal_mutable_message() {
  _has_bits_[0] |= 0x00000001u;
  return message_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SSL_Referee_Game_Event::release_message() {
  // @@protoc_insertion_point(field_release:SSL_Referee_Game_Event.message)
  if (!_internal_has_message()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return message_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SSL_Referee_Game_Event::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SSL_Referee_Game_Event.message)
}
inline std::string* SSL_Referee_Game_Event::unsafe_arena_release_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:SSL_Referee_Game_Event.message)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return message_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SSL_Referee_Game_Event::unsafe_arena_set_allocated_message(
    std::string* message) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (message != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  message_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      message, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SSL_Referee_Game_Event.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::SSL_Referee_Game_Event_GameEventType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_Referee_Game_Event_GameEventType>() {
  return ::SSL_Referee_Game_Event_GameEventType_descriptor();
}
template <> struct is_proto_enum< ::SSL_Referee_Game_Event_Team> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_Referee_Game_Event_Team>() {
  return ::SSL_Referee_Game_Event_Team_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_game_5fevent_2eproto
