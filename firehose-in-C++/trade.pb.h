// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trade.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_trade_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_trade_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/repeated_field.h> // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_trade_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal
{
  class AnyMetadata;
} // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_trade_2eproto
{
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_trade_2eproto;
namespace marketfeed
{
  class FilterRequest;
  class FilterRequestDefaultTypeInternal;
  extern FilterRequestDefaultTypeInternal _FilterRequest_default_instance_;
  class Trade;
  class TradeDefaultTypeInternal;
  extern TradeDefaultTypeInternal _Trade_default_instance_;
  class VoidMessage;
  class VoidMessageDefaultTypeInternal;
  extern VoidMessageDefaultTypeInternal _VoidMessage_default_instance_;
} // namespace marketfeed
PROTOBUF_NAMESPACE_OPEN
template <>
::marketfeed::FilterRequest *Arena::CreateMaybeMessage<::marketfeed::FilterRequest>(Arena *);
template <>
::marketfeed::Trade *Arena::CreateMaybeMessage<::marketfeed::Trade>(Arena *);
template <>
::marketfeed::VoidMessage *Arena::CreateMaybeMessage<::marketfeed::VoidMessage>(Arena *);
PROTOBUF_NAMESPACE_CLOSE
namespace marketfeed
{

  // ===================================================================

  class Trade PROTOBUF_FINAL : public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:marketfeed.Trade) */
  {
  public:
    inline Trade() : Trade(nullptr){};
    virtual ~Trade();

    Trade(const Trade &from);
    Trade(Trade &&from) noexcept
        : Trade()
    {
      *this = ::std::move(from);
    }

    inline Trade &operator=(const Trade &from)
    {
      CopyFrom(from);
      return *this;
    }
    inline Trade &operator=(Trade &&from) noexcept
    {
      if (GetArena() == from.GetArena())
      {
        if (this != &from)
          InternalSwap(&from);
      }
      else
      {
        CopyFrom(from);
      }
      return *this;
    }

    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
    {
      return GetDescriptor();
    }
    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
    {
      return GetMetadataStatic().descriptor;
    }
    static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
    {
      return GetMetadataStatic().reflection;
    }
    static const Trade &default_instance();

    static void InitAsDefaultInstance(); // FOR INTERNAL USE ONLY
    static inline const Trade *internal_default_instance()
    {
      return reinterpret_cast<const Trade *>(
          &_Trade_default_instance_);
    }
    static constexpr int kIndexInFileMessages =
        0;

    friend void swap(Trade &a, Trade &b)
    {
      a.Swap(&b);
    }
    inline void Swap(Trade *other)
    {
      if (other == this)
        return;
      if (GetArena() == other->GetArena())
      {
        InternalSwap(other);
      }
      else
      {
        ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
      }
    }
    void UnsafeArenaSwap(Trade *other)
    {
      if (other == this)
        return;
      GOOGLE_DCHECK(GetArena() == other->GetArena());
      InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    inline Trade *New() const final
    {
      return CreateMaybeMessage<Trade>(nullptr);
    }

    Trade *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final
    {
      return CreateMaybeMessage<Trade>(arena);
    }
    void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void CopyFrom(const Trade &from);
    void MergeFrom(const Trade &from);
    PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
    bool IsInitialized() const final;

    size_t ByteSizeLong() const final;
    const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
    ::PROTOBUF_NAMESPACE_ID::uint8 *_InternalSerialize(
        ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;
    int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
    inline void SharedCtor();
    inline void SharedDtor();
    void SetCachedSize(int size) const final;
    void InternalSwap(Trade *other);
    friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
    static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
    {
      return "marketfeed.Trade";
    }

  protected:
    explicit Trade(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  private:
    static void ArenaDtor(void *object);
    inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  public:
    ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  private:
    static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic()
    {
      ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trade_2eproto);
      return ::descriptor_table_trade_2eproto.file_level_metadata[kIndexInFileMessages];
    }

  public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    enum : int
    {
      kTickerFieldNumber = 1,
      kTimestampFieldNumber = 2,
      kPriceFieldNumber = 3,
      kTransactionFieldNumber = 4,
      kOpenFieldNumber = 5,
      kDirectionFieldNumber = 6,
    };
    // string ticker = 1;
    void clear_ticker();
    const std::string &ticker() const;
    void set_ticker(const std::string &value);
    void set_ticker(std::string &&value);
    void set_ticker(const char *value);
    void set_ticker(const char *value, size_t size);
    std::string *mutable_ticker();
    std::string *release_ticker();
    void set_allocated_ticker(std::string *ticker);
    GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
                                       "    string fields are deprecated and will be removed in a"
                                       "    future release.")
    std::string *unsafe_arena_release_ticker();
    GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
                                       "    string fields are deprecated and will be removed in a"
                                       "    future release.")
    void unsafe_arena_set_allocated_ticker(
        std::string *ticker);

  private:
    const std::string &_internal_ticker() const;
    void _internal_set_ticker(const std::string &value);
    std::string *_internal_mutable_ticker();

  public:
    // int64 timestamp = 2;
    void clear_timestamp();
    ::PROTOBUF_NAMESPACE_ID::int64 timestamp() const;
    void set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);

  private:
    ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp() const;
    void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);

  public:
    // double price = 3;
    void clear_price();
    double price() const;
    void set_price(double value);

  private:
    double _internal_price() const;
    void _internal_set_price(double value);

  public:
    // int64 transaction = 4;
    void clear_transaction();
    ::PROTOBUF_NAMESPACE_ID::int64 transaction() const;
    void set_transaction(::PROTOBUF_NAMESPACE_ID::int64 value);

  private:
    ::PROTOBUF_NAMESPACE_ID::int64 _internal_transaction() const;
    void _internal_set_transaction(::PROTOBUF_NAMESPACE_ID::int64 value);

  public:
    // double open = 5;
    void clear_open();
    double open() const;
    void set_open(double value);

  private:
    double _internal_open() const;
    void _internal_set_open(double value);

  public:
    // sint32 direction = 6;
    void clear_direction();
    ::PROTOBUF_NAMESPACE_ID::int32 direction() const;
    void set_direction(::PROTOBUF_NAMESPACE_ID::int32 value);

  private:
    ::PROTOBUF_NAMESPACE_ID::int32 _internal_direction() const;
    void _internal_set_direction(::PROTOBUF_NAMESPACE_ID::int32 value);

  public:
    // @@protoc_insertion_point(class_scope:marketfeed.Trade)
  private:
    class _Internal;

    template <typename T>
    friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
    typedef void InternalArenaConstructable_;
    typedef void DestructorSkippable_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ticker_;
    ::PROTOBUF_NAMESPACE_ID::int64 timestamp_;
    double price_;
    ::PROTOBUF_NAMESPACE_ID::int64 transaction_;
    double open_;
    ::PROTOBUF_NAMESPACE_ID::int32 direction_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    friend struct ::TableStruct_trade_2eproto;
  };
  // -------------------------------------------------------------------

  class VoidMessage PROTOBUF_FINAL : public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:marketfeed.VoidMessage) */
  {
  public:
    inline VoidMessage() : VoidMessage(nullptr){};
    virtual ~VoidMessage();

    VoidMessage(const VoidMessage &from);
    VoidMessage(VoidMessage &&from) noexcept
        : VoidMessage()
    {
      *this = ::std::move(from);
    }

    inline VoidMessage &operator=(const VoidMessage &from)
    {
      CopyFrom(from);
      return *this;
    }
    inline VoidMessage &operator=(VoidMessage &&from) noexcept
    {
      if (GetArena() == from.GetArena())
      {
        if (this != &from)
          InternalSwap(&from);
      }
      else
      {
        CopyFrom(from);
      }
      return *this;
    }

    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
    {
      return GetDescriptor();
    }
    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
    {
      return GetMetadataStatic().descriptor;
    }
    static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
    {
      return GetMetadataStatic().reflection;
    }
    static const VoidMessage &default_instance();

    static void InitAsDefaultInstance(); // FOR INTERNAL USE ONLY
    static inline const VoidMessage *internal_default_instance()
    {
      return reinterpret_cast<const VoidMessage *>(
          &_VoidMessage_default_instance_);
    }
    static constexpr int kIndexInFileMessages =
        1;

    friend void swap(VoidMessage &a, VoidMessage &b)
    {
      a.Swap(&b);
    }
    inline void Swap(VoidMessage *other)
    {
      if (other == this)
        return;
      if (GetArena() == other->GetArena())
      {
        InternalSwap(other);
      }
      else
      {
        ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
      }
    }
    void UnsafeArenaSwap(VoidMessage *other)
    {
      if (other == this)
        return;
      GOOGLE_DCHECK(GetArena() == other->GetArena());
      InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    inline VoidMessage *New() const final
    {
      return CreateMaybeMessage<VoidMessage>(nullptr);
    }

    VoidMessage *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final
    {
      return CreateMaybeMessage<VoidMessage>(arena);
    }
    void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void CopyFrom(const VoidMessage &from);
    void MergeFrom(const VoidMessage &from);
    PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
    bool IsInitialized() const final;

    size_t ByteSizeLong() const final;
    const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
    ::PROTOBUF_NAMESPACE_ID::uint8 *_InternalSerialize(
        ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;
    int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
    inline void SharedCtor();
    inline void SharedDtor();
    void SetCachedSize(int size) const final;
    void InternalSwap(VoidMessage *other);
    friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
    static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
    {
      return "marketfeed.VoidMessage";
    }

  protected:
    explicit VoidMessage(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  private:
    static void ArenaDtor(void *object);
    inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  public:
    ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  private:
    static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic()
    {
      ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trade_2eproto);
      return ::descriptor_table_trade_2eproto.file_level_metadata[kIndexInFileMessages];
    }

  public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    // @@protoc_insertion_point(class_scope:marketfeed.VoidMessage)
  private:
    class _Internal;

    template <typename T>
    friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
    typedef void InternalArenaConstructable_;
    typedef void DestructorSkippable_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    friend struct ::TableStruct_trade_2eproto;
  };
  // -------------------------------------------------------------------

  class FilterRequest PROTOBUF_FINAL : public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:marketfeed.FilterRequest) */
  {
  public:
    inline FilterRequest() : FilterRequest(nullptr){};
    virtual ~FilterRequest();

    FilterRequest(const FilterRequest &from);
    FilterRequest(FilterRequest &&from) noexcept
        : FilterRequest()
    {
      *this = ::std::move(from);
    }

    inline FilterRequest &operator=(const FilterRequest &from)
    {
      CopyFrom(from);
      return *this;
    }
    inline FilterRequest &operator=(FilterRequest &&from) noexcept
    {
      if (GetArena() == from.GetArena())
      {
        if (this != &from)
          InternalSwap(&from);
      }
      else
      {
        CopyFrom(from);
      }
      return *this;
    }

    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
    {
      return GetDescriptor();
    }
    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
    {
      return GetMetadataStatic().descriptor;
    }
    static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
    {
      return GetMetadataStatic().reflection;
    }
    static const FilterRequest &default_instance();

    static void InitAsDefaultInstance(); // FOR INTERNAL USE ONLY
    static inline const FilterRequest *internal_default_instance()
    {
      return reinterpret_cast<const FilterRequest *>(
          &_FilterRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages =
        2;

    friend void swap(FilterRequest &a, FilterRequest &b)
    {
      a.Swap(&b);
    }
    inline void Swap(FilterRequest *other)
    {
      if (other == this)
        return;
      if (GetArena() == other->GetArena())
      {
        InternalSwap(other);
      }
      else
      {
        ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
      }
    }
    void UnsafeArenaSwap(FilterRequest *other)
    {
      if (other == this)
        return;
      GOOGLE_DCHECK(GetArena() == other->GetArena());
      InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    inline FilterRequest *New() const final
    {
      return CreateMaybeMessage<FilterRequest>(nullptr);
    }

    FilterRequest *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final
    {
      return CreateMaybeMessage<FilterRequest>(arena);
    }
    void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void CopyFrom(const FilterRequest &from);
    void MergeFrom(const FilterRequest &from);
    PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
    bool IsInitialized() const final;

    size_t ByteSizeLong() const final;
    const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
    ::PROTOBUF_NAMESPACE_ID::uint8 *_InternalSerialize(
        ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;
    int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
    inline void SharedCtor();
    inline void SharedDtor();
    void SetCachedSize(int size) const final;
    void InternalSwap(FilterRequest *other);
    friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
    static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
    {
      return "marketfeed.FilterRequest";
    }

  protected:
    explicit FilterRequest(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  private:
    static void ArenaDtor(void *object);
    inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  public:
    ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  private:
    static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic()
    {
      ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trade_2eproto);
      return ::descriptor_table_trade_2eproto.file_level_metadata[kIndexInFileMessages];
    }

  public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    enum : int
    {
      kTickersFieldNumber = 2,
      kDelayFieldNumber = 1,
    };
    // repeated string tickers = 2;
    int tickers_size() const;

  private:
    int _internal_tickers_size() const;

  public:
    void clear_tickers();
    const std::string &tickers(int index) const;
    std::string *mutable_tickers(int index);
    void set_tickers(int index, const std::string &value);
    void set_tickers(int index, std::string &&value);
    void set_tickers(int index, const char *value);
    void set_tickers(int index, const char *value, size_t size);
    std::string *add_tickers();
    void add_tickers(const std::string &value);
    void add_tickers(std::string &&value);
    void add_tickers(const char *value);
    void add_tickers(const char *value, size_t size);
    const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> &tickers() const;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> *mutable_tickers();

  private:
    const std::string &_internal_tickers(int index) const;
    std::string *_internal_add_tickers();

  public:
    // int64 delay = 1;
    void clear_delay();
    ::PROTOBUF_NAMESPACE_ID::int64 delay() const;
    void set_delay(::PROTOBUF_NAMESPACE_ID::int64 value);

  private:
    ::PROTOBUF_NAMESPACE_ID::int64 _internal_delay() const;
    void _internal_set_delay(::PROTOBUF_NAMESPACE_ID::int64 value);

  public:
    // @@protoc_insertion_point(class_scope:marketfeed.FilterRequest)
  private:
    class _Internal;

    template <typename T>
    friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
    typedef void InternalArenaConstructable_;
    typedef void DestructorSkippable_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> tickers_;
    ::PROTOBUF_NAMESPACE_ID::int64 delay_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    friend struct ::TableStruct_trade_2eproto;
  };
  // ===================================================================

  // ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif // __GNUC__
  // Trade

  // string ticker = 1;
  inline void Trade::clear_ticker()
  {
    ticker_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  }
  inline const std::string &Trade::ticker() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.Trade.ticker)
    return _internal_ticker();
  }
  inline void Trade::set_ticker(const std::string &value)
  {
    _internal_set_ticker(value);
    // @@protoc_insertion_point(field_set:marketfeed.Trade.ticker)
  }
  inline std::string *Trade::mutable_ticker()
  {
    // @@protoc_insertion_point(field_mutable:marketfeed.Trade.ticker)
    return _internal_mutable_ticker();
  }
  inline const std::string &Trade::_internal_ticker() const
  {
    return ticker_.Get();
  }
  inline void Trade::_internal_set_ticker(const std::string &value)
  {

    ticker_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
  }
  inline void Trade::set_ticker(std::string &&value)
  {

    ticker_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
    // @@protoc_insertion_point(field_set_rvalue:marketfeed.Trade.ticker)
  }
  inline void Trade::set_ticker(const char *value)
  {
    GOOGLE_DCHECK(value != nullptr);

    ticker_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
                GetArena());
    // @@protoc_insertion_point(field_set_char:marketfeed.Trade.ticker)
  }
  inline void Trade::set_ticker(const char *value,
                                size_t size)
  {

    ticker_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(reinterpret_cast<const char *>(value), size), GetArena());
    // @@protoc_insertion_point(field_set_pointer:marketfeed.Trade.ticker)
  }
  inline std::string *Trade::_internal_mutable_ticker()
  {

    return ticker_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  }
  inline std::string *Trade::release_ticker()
  {
    // @@protoc_insertion_point(field_release:marketfeed.Trade.ticker)
    return ticker_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  }
  inline void Trade::set_allocated_ticker(std::string *ticker)
  {
    if (ticker != nullptr)
    {
    }
    else
    {
    }
    ticker_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ticker,
                         GetArena());
    // @@protoc_insertion_point(field_set_allocated:marketfeed.Trade.ticker)
  }
  inline std::string *Trade::unsafe_arena_release_ticker()
  {
    // @@protoc_insertion_point(field_unsafe_arena_release:marketfeed.Trade.ticker)
    GOOGLE_DCHECK(GetArena() != nullptr);

    return ticker_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                      GetArena());
  }
  inline void Trade::unsafe_arena_set_allocated_ticker(
      std::string *ticker)
  {
    GOOGLE_DCHECK(GetArena() != nullptr);
    if (ticker != nullptr)
    {
    }
    else
    {
    }
    ticker_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                    ticker, GetArena());
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:marketfeed.Trade.ticker)
  }

  // int64 timestamp = 2;
  inline void Trade::clear_timestamp()
  {
    timestamp_ = PROTOBUF_LONGLONG(0);
  }
  inline ::PROTOBUF_NAMESPACE_ID::int64 Trade::_internal_timestamp() const
  {
    return timestamp_;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int64 Trade::timestamp() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.Trade.timestamp)
    return _internal_timestamp();
  }
  inline void Trade::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value)
  {

    timestamp_ = value;
  }
  inline void Trade::set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value)
  {
    _internal_set_timestamp(value);
    // @@protoc_insertion_point(field_set:marketfeed.Trade.timestamp)
  }

  // double price = 3;
  inline void Trade::clear_price()
  {
    price_ = 0;
  }
  inline double Trade::_internal_price() const
  {
    return price_;
  }
  inline double Trade::price() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.Trade.price)
    return _internal_price();
  }
  inline void Trade::_internal_set_price(double value)
  {

    price_ = value;
  }
  inline void Trade::set_price(double value)
  {
    _internal_set_price(value);
    // @@protoc_insertion_point(field_set:marketfeed.Trade.price)
  }

  // int64 transaction = 4;
  inline void Trade::clear_transaction()
  {
    transaction_ = PROTOBUF_LONGLONG(0);
  }
  inline ::PROTOBUF_NAMESPACE_ID::int64 Trade::_internal_transaction() const
  {
    return transaction_;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int64 Trade::transaction() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.Trade.transaction)
    return _internal_transaction();
  }
  inline void Trade::_internal_set_transaction(::PROTOBUF_NAMESPACE_ID::int64 value)
  {

    transaction_ = value;
  }
  inline void Trade::set_transaction(::PROTOBUF_NAMESPACE_ID::int64 value)
  {
    _internal_set_transaction(value);
    // @@protoc_insertion_point(field_set:marketfeed.Trade.transaction)
  }

  // double open = 5;
  inline void Trade::clear_open()
  {
    open_ = 0;
  }
  inline double Trade::_internal_open() const
  {
    return open_;
  }
  inline double Trade::open() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.Trade.open)
    return _internal_open();
  }
  inline void Trade::_internal_set_open(double value)
  {

    open_ = value;
  }
  inline void Trade::set_open(double value)
  {
    _internal_set_open(value);
    // @@protoc_insertion_point(field_set:marketfeed.Trade.open)
  }

  // sint32 direction = 6;
  inline void Trade::clear_direction()
  {
    direction_ = 0;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int32 Trade::_internal_direction() const
  {
    return direction_;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int32 Trade::direction() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.Trade.direction)
    return _internal_direction();
  }
  inline void Trade::_internal_set_direction(::PROTOBUF_NAMESPACE_ID::int32 value)
  {

    direction_ = value;
  }
  inline void Trade::set_direction(::PROTOBUF_NAMESPACE_ID::int32 value)
  {
    _internal_set_direction(value);
    // @@protoc_insertion_point(field_set:marketfeed.Trade.direction)
  }

  // -------------------------------------------------------------------

  // VoidMessage

  // -------------------------------------------------------------------

  // FilterRequest

  // int64 delay = 1;
  inline void FilterRequest::clear_delay()
  {
    delay_ = PROTOBUF_LONGLONG(0);
  }
  inline ::PROTOBUF_NAMESPACE_ID::int64 FilterRequest::_internal_delay() const
  {
    return delay_;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int64 FilterRequest::delay() const
  {
    // @@protoc_insertion_point(field_get:marketfeed.FilterRequest.delay)
    return _internal_delay();
  }
  inline void FilterRequest::_internal_set_delay(::PROTOBUF_NAMESPACE_ID::int64 value)
  {

    delay_ = value;
  }
  inline void FilterRequest::set_delay(::PROTOBUF_NAMESPACE_ID::int64 value)
  {
    _internal_set_delay(value);
    // @@protoc_insertion_point(field_set:marketfeed.FilterRequest.delay)
  }

  // repeated string tickers = 2;
  inline int FilterRequest::_internal_tickers_size() const
  {
    return tickers_.size();
  }
  inline int FilterRequest::tickers_size() const
  {
    return _internal_tickers_size();
  }
  inline void FilterRequest::clear_tickers()
  {
    tickers_.Clear();
  }
  inline std::string *FilterRequest::add_tickers()
  {
    // @@protoc_insertion_point(field_add_mutable:marketfeed.FilterRequest.tickers)
    return _internal_add_tickers();
  }
  inline const std::string &FilterRequest::_internal_tickers(int index) const
  {
    return tickers_.Get(index);
  }
  inline const std::string &FilterRequest::tickers(int index) const
  {
    // @@protoc_insertion_point(field_get:marketfeed.FilterRequest.tickers)
    return _internal_tickers(index);
  }
  inline std::string *FilterRequest::mutable_tickers(int index)
  {
    // @@protoc_insertion_point(field_mutable:marketfeed.FilterRequest.tickers)
    return tickers_.Mutable(index);
  }
  inline void FilterRequest::set_tickers(int index, const std::string &value)
  {
    // @@protoc_insertion_point(field_set:marketfeed.FilterRequest.tickers)
    tickers_.Mutable(index)->assign(value);
  }
  inline void FilterRequest::set_tickers(int index, std::string &&value)
  {
    // @@protoc_insertion_point(field_set:marketfeed.FilterRequest.tickers)
    tickers_.Mutable(index)->assign(std::move(value));
  }
  inline void FilterRequest::set_tickers(int index, const char *value)
  {
    GOOGLE_DCHECK(value != nullptr);
    tickers_.Mutable(index)->assign(value);
    // @@protoc_insertion_point(field_set_char:marketfeed.FilterRequest.tickers)
  }
  inline void FilterRequest::set_tickers(int index, const char *value, size_t size)
  {
    tickers_.Mutable(index)->assign(
        reinterpret_cast<const char *>(value), size);
    // @@protoc_insertion_point(field_set_pointer:marketfeed.FilterRequest.tickers)
  }
  inline std::string *FilterRequest::_internal_add_tickers()
  {
    return tickers_.Add();
  }
  inline void FilterRequest::add_tickers(const std::string &value)
  {
    tickers_.Add()->assign(value);
    // @@protoc_insertion_point(field_add:marketfeed.FilterRequest.tickers)
  }
  inline void FilterRequest::add_tickers(std::string &&value)
  {
    tickers_.Add(std::move(value));
    // @@protoc_insertion_point(field_add:marketfeed.FilterRequest.tickers)
  }
  inline void FilterRequest::add_tickers(const char *value)
  {
    GOOGLE_DCHECK(value != nullptr);
    tickers_.Add()->assign(value);
    // @@protoc_insertion_point(field_add_char:marketfeed.FilterRequest.tickers)
  }
  inline void FilterRequest::add_tickers(const char *value, size_t size)
  {
    tickers_.Add()->assign(reinterpret_cast<const char *>(value), size);
    // @@protoc_insertion_point(field_add_pointer:marketfeed.FilterRequest.tickers)
  }
  inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> &
  FilterRequest::tickers() const
  {
    // @@protoc_insertion_point(field_list:marketfeed.FilterRequest.tickers)
    return tickers_;
  }
  inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> *
  FilterRequest::mutable_tickers()
  {
    // @@protoc_insertion_point(field_mutable_list:marketfeed.FilterRequest.tickers)
    return &tickers_;
  }

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif // __GNUC__
  // -------------------------------------------------------------------

  // -------------------------------------------------------------------

  // @@protoc_insertion_point(namespace_scope)

} // namespace marketfeed

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_trade_2eproto
