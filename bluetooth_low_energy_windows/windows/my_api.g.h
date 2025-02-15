// Autogenerated from Pigeon (v19.0.2), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#ifndef PIGEON_MY_API_G_H_
#define PIGEON_MY_API_G_H_
#include <flutter/basic_message_channel.h>
#include <flutter/binary_messenger.h>
#include <flutter/encodable_value.h>
#include <flutter/standard_message_codec.h>

#include <map>
#include <optional>
#include <string>

namespace bluetooth_low_energy_windows {


// Generated class from Pigeon.

class FlutterError {
 public:
  explicit FlutterError(const std::string& code)
    : code_(code) {}
  explicit FlutterError(const std::string& code, const std::string& message)
    : code_(code), message_(message) {}
  explicit FlutterError(const std::string& code, const std::string& message, const flutter::EncodableValue& details)
    : code_(code), message_(message), details_(details) {}

  const std::string& code() const { return code_; }
  const std::string& message() const { return message_; }
  const flutter::EncodableValue& details() const { return details_; }

 private:
  std::string code_;
  std::string message_;
  flutter::EncodableValue details_;
};

template<class T> class ErrorOr {
 public:
  ErrorOr(const T& rhs) : v_(rhs) {}
  ErrorOr(const T&& rhs) : v_(std::move(rhs)) {}
  ErrorOr(const FlutterError& rhs) : v_(rhs) {}
  ErrorOr(const FlutterError&& rhs) : v_(std::move(rhs)) {}

  bool has_error() const { return std::holds_alternative<FlutterError>(v_); }
  const T& value() const { return std::get<T>(v_); };
  const FlutterError& error() const { return std::get<FlutterError>(v_); };

 private:
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerFlutterAPI;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerFlutterAPI;
  ErrorOr() = default;
  T TakeValue() && { return std::get<T>(std::move(v_)); }

  std::variant<T, FlutterError> v_;
};


enum class MyBluetoothLowEnergyStateArgs {
  unknown = 0,
  unsupported = 1,
  disabled = 2,
  off = 3,
  on = 4
};

enum class MyAdvertisementTypeArgs {
  connectableUndirected = 0,
  connectableDirected = 1,
  scannableUndirected = 2,
  nonConnectableUndirected = 3,
  scanResponse = 4,
  extended = 5
};

enum class MyAddressTypeArgs {
  public = 0,
  random = 1,
  unspecified = 2
};

enum class MyConnectionStateArgs {
  disconnected = 0,
  connected = 1
};

enum class MyGATTCharacteristicPropertyArgs {
  read = 0,
  write = 1,
  writeWithoutResponse = 2,
  notify = 3,
  indicate = 4
};

enum class MyGATTCharacteristicWriteTypeArgs {
  withResponse = 0,
  withoutResponse = 1
};

enum class MyGATTCharacteristicNotifyStateArgs {
  none = 0,
  notify = 1,
  indicate = 2
};

enum class MyGATTProtectionLevelArgs {
  plain = 0,
  authenticationRequired = 1,
  entryptionRequired = 2,
  encryptionAndAuthenticationRequired = 3
};

enum class MyGATTProtocolErrorArgs {
  invalidHandle = 0,
  readNotPermitted = 1,
  writeNotPermitted = 2,
  invalidPDU = 3,
  insufficientAuthentication = 4,
  requestNotSupported = 5,
  invalidOffset = 6,
  insufficientAuthorization = 7,
  prepareQueueFull = 8,
  attributeNotFound = 9,
  attributeNotLong = 10,
  insufficientEncryptionKeySize = 11,
  invalidAttributeValueLength = 12,
  unlikelyError = 13,
  insufficientEncryption = 14,
  unsupportedGroupType = 15,
  insufficientResources = 16
};

enum class MyCacheModeArgs {
  cached = 0,
  uncached = 1
};

// Generated class from Pigeon that represents data sent in messages.
class MyManufacturerSpecificDataArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyManufacturerSpecificDataArgs(
    int64_t id_args,
    const std::vector<uint8_t>& data_args);

  int64_t id_args() const;
  void set_id_args(int64_t value_arg);

  const std::vector<uint8_t>& data_args() const;
  void set_data_args(const std::vector<uint8_t>& value_arg);


 private:
  static MyManufacturerSpecificDataArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t id_args_;
  std::vector<uint8_t> data_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyAdvertisementArgs {
 public:
  // Constructs an object setting all non-nullable fields.
  explicit MyAdvertisementArgs(
    const flutter::EncodableList& service_u_u_i_ds_args,
    const flutter::EncodableMap& service_data_args,
    const flutter::EncodableList& manufacturer_specific_data_args);

  // Constructs an object setting all fields.
  explicit MyAdvertisementArgs(
    const std::string* name_args,
    const flutter::EncodableList& service_u_u_i_ds_args,
    const flutter::EncodableMap& service_data_args,
    const flutter::EncodableList& manufacturer_specific_data_args);

  const std::string* name_args() const;
  void set_name_args(const std::string_view* value_arg);
  void set_name_args(std::string_view value_arg);

  const flutter::EncodableList& service_u_u_i_ds_args() const;
  void set_service_u_u_i_ds_args(const flutter::EncodableList& value_arg);

  const flutter::EncodableMap& service_data_args() const;
  void set_service_data_args(const flutter::EncodableMap& value_arg);

  const flutter::EncodableList& manufacturer_specific_data_args() const;
  void set_manufacturer_specific_data_args(const flutter::EncodableList& value_arg);


 private:
  static MyAdvertisementArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  std::optional<std::string> name_args_;
  flutter::EncodableList service_u_u_i_ds_args_;
  flutter::EncodableMap service_data_args_;
  flutter::EncodableList manufacturer_specific_data_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyCentralArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyCentralArgs(int64_t address_args);

  int64_t address_args() const;
  void set_address_args(int64_t value_arg);


 private:
  static MyCentralArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t address_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyPeripheralArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyPeripheralArgs(int64_t address_args);

  int64_t address_args() const;
  void set_address_args(int64_t value_arg);


 private:
  static MyPeripheralArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t address_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyGATTDescriptorArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyGATTDescriptorArgs(
    int64_t handle_args,
    const std::string& uuid_args);

  int64_t handle_args() const;
  void set_handle_args(int64_t value_arg);

  const std::string& uuid_args() const;
  void set_uuid_args(std::string_view value_arg);


 private:
  static MyGATTDescriptorArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t handle_args_;
  std::string uuid_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyGATTCharacteristicArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyGATTCharacteristicArgs(
    int64_t handle_args,
    const std::string& uuid_args,
    const flutter::EncodableList& property_numbers_args,
    const flutter::EncodableList& descriptors_args);

  int64_t handle_args() const;
  void set_handle_args(int64_t value_arg);

  const std::string& uuid_args() const;
  void set_uuid_args(std::string_view value_arg);

  const flutter::EncodableList& property_numbers_args() const;
  void set_property_numbers_args(const flutter::EncodableList& value_arg);

  const flutter::EncodableList& descriptors_args() const;
  void set_descriptors_args(const flutter::EncodableList& value_arg);


 private:
  static MyGATTCharacteristicArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t handle_args_;
  std::string uuid_args_;
  flutter::EncodableList property_numbers_args_;
  flutter::EncodableList descriptors_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyGATTServiceArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyGATTServiceArgs(
    int64_t handle_args,
    const std::string& uuid_args,
    bool is_primary_args,
    const flutter::EncodableList& included_services_args,
    const flutter::EncodableList& characteristics_args);

  int64_t handle_args() const;
  void set_handle_args(int64_t value_arg);

  const std::string& uuid_args() const;
  void set_uuid_args(std::string_view value_arg);

  bool is_primary_args() const;
  void set_is_primary_args(bool value_arg);

  const flutter::EncodableList& included_services_args() const;
  void set_included_services_args(const flutter::EncodableList& value_arg);

  const flutter::EncodableList& characteristics_args() const;
  void set_characteristics_args(const flutter::EncodableList& value_arg);


 private:
  static MyGATTServiceArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t handle_args_;
  std::string uuid_args_;
  bool is_primary_args_;
  flutter::EncodableList included_services_args_;
  flutter::EncodableList characteristics_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyMutableGATTDescriptorArgs {
 public:
  // Constructs an object setting all non-nullable fields.
  explicit MyMutableGATTDescriptorArgs(
    int64_t hash_code_args,
    const std::string& uuid_args);

  // Constructs an object setting all fields.
  explicit MyMutableGATTDescriptorArgs(
    int64_t hash_code_args,
    const std::string& uuid_args,
    const std::vector<uint8_t>* value_args,
    const MyGATTProtectionLevelArgs* read_protection_level_args,
    const MyGATTProtectionLevelArgs* write_protection_level_args);

  int64_t hash_code_args() const;
  void set_hash_code_args(int64_t value_arg);

  const std::string& uuid_args() const;
  void set_uuid_args(std::string_view value_arg);

  const std::vector<uint8_t>* value_args() const;
  void set_value_args(const std::vector<uint8_t>* value_arg);
  void set_value_args(const std::vector<uint8_t>& value_arg);

  const MyGATTProtectionLevelArgs* read_protection_level_args() const;
  void set_read_protection_level_args(const MyGATTProtectionLevelArgs* value_arg);
  void set_read_protection_level_args(const MyGATTProtectionLevelArgs& value_arg);

  const MyGATTProtectionLevelArgs* write_protection_level_args() const;
  void set_write_protection_level_args(const MyGATTProtectionLevelArgs* value_arg);
  void set_write_protection_level_args(const MyGATTProtectionLevelArgs& value_arg);


 private:
  static MyMutableGATTDescriptorArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t hash_code_args_;
  std::string uuid_args_;
  std::optional<std::vector<uint8_t>> value_args_;
  std::optional<MyGATTProtectionLevelArgs> read_protection_level_args_;
  std::optional<MyGATTProtectionLevelArgs> write_protection_level_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyMutableGATTCharacteristicArgs {
 public:
  // Constructs an object setting all non-nullable fields.
  explicit MyMutableGATTCharacteristicArgs(
    int64_t hash_code_args,
    const std::string& uuid_args,
    const flutter::EncodableList& property_numbers_args,
    const flutter::EncodableList& descriptors_args);

  // Constructs an object setting all fields.
  explicit MyMutableGATTCharacteristicArgs(
    int64_t hash_code_args,
    const std::string& uuid_args,
    const std::vector<uint8_t>* value_args,
    const flutter::EncodableList& property_numbers_args,
    const MyGATTProtectionLevelArgs* read_protection_level_args,
    const MyGATTProtectionLevelArgs* write_protection_level_args,
    const flutter::EncodableList& descriptors_args);

  int64_t hash_code_args() const;
  void set_hash_code_args(int64_t value_arg);

  const std::string& uuid_args() const;
  void set_uuid_args(std::string_view value_arg);

  const std::vector<uint8_t>* value_args() const;
  void set_value_args(const std::vector<uint8_t>* value_arg);
  void set_value_args(const std::vector<uint8_t>& value_arg);

  const flutter::EncodableList& property_numbers_args() const;
  void set_property_numbers_args(const flutter::EncodableList& value_arg);

  const MyGATTProtectionLevelArgs* read_protection_level_args() const;
  void set_read_protection_level_args(const MyGATTProtectionLevelArgs* value_arg);
  void set_read_protection_level_args(const MyGATTProtectionLevelArgs& value_arg);

  const MyGATTProtectionLevelArgs* write_protection_level_args() const;
  void set_write_protection_level_args(const MyGATTProtectionLevelArgs* value_arg);
  void set_write_protection_level_args(const MyGATTProtectionLevelArgs& value_arg);

  const flutter::EncodableList& descriptors_args() const;
  void set_descriptors_args(const flutter::EncodableList& value_arg);


 private:
  static MyMutableGATTCharacteristicArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t hash_code_args_;
  std::string uuid_args_;
  std::optional<std::vector<uint8_t>> value_args_;
  flutter::EncodableList property_numbers_args_;
  std::optional<MyGATTProtectionLevelArgs> read_protection_level_args_;
  std::optional<MyGATTProtectionLevelArgs> write_protection_level_args_;
  flutter::EncodableList descriptors_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyMutableGATTServiceArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyMutableGATTServiceArgs(
    int64_t hash_code_args,
    const std::string& uuid_args,
    bool is_primary_args,
    const flutter::EncodableList& included_services_args,
    const flutter::EncodableList& characteristics_args);

  int64_t hash_code_args() const;
  void set_hash_code_args(int64_t value_arg);

  const std::string& uuid_args() const;
  void set_uuid_args(std::string_view value_arg);

  bool is_primary_args() const;
  void set_is_primary_args(bool value_arg);

  const flutter::EncodableList& included_services_args() const;
  void set_included_services_args(const flutter::EncodableList& value_arg);

  const flutter::EncodableList& characteristics_args() const;
  void set_characteristics_args(const flutter::EncodableList& value_arg);


 private:
  static MyMutableGATTServiceArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t hash_code_args_;
  std::string uuid_args_;
  bool is_primary_args_;
  flutter::EncodableList included_services_args_;
  flutter::EncodableList characteristics_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyGATTReadRequestArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyGATTReadRequestArgs(
    int64_t id_args,
    int64_t offset_args,
    int64_t length_args);

  int64_t id_args() const;
  void set_id_args(int64_t value_arg);

  int64_t offset_args() const;
  void set_offset_args(int64_t value_arg);

  int64_t length_args() const;
  void set_length_args(int64_t value_arg);


 private:
  static MyGATTReadRequestArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t id_args_;
  int64_t offset_args_;
  int64_t length_args_;

};


// Generated class from Pigeon that represents data sent in messages.
class MyGATTWriteRequestArgs {
 public:
  // Constructs an object setting all fields.
  explicit MyGATTWriteRequestArgs(
    int64_t id_args,
    int64_t offset_args,
    const std::vector<uint8_t>& value_args,
    const MyGATTCharacteristicWriteTypeArgs& type_args);

  int64_t id_args() const;
  void set_id_args(int64_t value_arg);

  int64_t offset_args() const;
  void set_offset_args(int64_t value_arg);

  const std::vector<uint8_t>& value_args() const;
  void set_value_args(const std::vector<uint8_t>& value_arg);

  const MyGATTCharacteristicWriteTypeArgs& type_args() const;
  void set_type_args(const MyGATTCharacteristicWriteTypeArgs& value_arg);


 private:
  static MyGATTWriteRequestArgs FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class MyCentralManagerHostAPI;
  friend class MyCentralManagerHostAPICodecSerializer;
  friend class MyCentralManagerFlutterAPI;
  friend class MyCentralManagerFlutterAPICodecSerializer;
  friend class MyPeripheralManagerHostAPI;
  friend class MyPeripheralManagerHostAPICodecSerializer;
  friend class MyPeripheralManagerFlutterAPI;
  friend class MyPeripheralManagerFlutterAPICodecSerializer;
  int64_t id_args_;
  int64_t offset_args_;
  std::vector<uint8_t> value_args_;
  MyGATTCharacteristicWriteTypeArgs type_args_;

};

class MyCentralManagerHostAPICodecSerializer : public flutter::StandardCodecSerializer {
 public:
  MyCentralManagerHostAPICodecSerializer();
  inline static MyCentralManagerHostAPICodecSerializer& GetInstance() {
    static MyCentralManagerHostAPICodecSerializer sInstance;
    return sInstance;
  }

  void WriteValue(
    const flutter::EncodableValue& value,
    flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
    uint8_t type,
    flutter::ByteStreamReader* stream) const override;

};

// Generated interface from Pigeon that represents a handler of messages from Flutter.
class MyCentralManagerHostAPI {
 public:
  MyCentralManagerHostAPI(const MyCentralManagerHostAPI&) = delete;
  MyCentralManagerHostAPI& operator=(const MyCentralManagerHostAPI&) = delete;
  virtual ~MyCentralManagerHostAPI() {}
  virtual void Initialize(std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual ErrorOr<MyBluetoothLowEnergyStateArgs> GetState() = 0;
  virtual std::optional<FlutterError> StartDiscovery(const flutter::EncodableList& service_u_u_i_ds_args) = 0;
  virtual std::optional<FlutterError> StopDiscovery() = 0;
  virtual void Connect(
    int64_t address_args,
    std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual std::optional<FlutterError> Disconnect(int64_t address_args) = 0;
  virtual ErrorOr<int64_t> GetMTU(int64_t address_args) = 0;
  virtual void GetServices(
    int64_t address_args,
    const MyCacheModeArgs& mode_args,
    std::function<void(ErrorOr<flutter::EncodableList> reply)> result) = 0;
  virtual void GetIncludedServices(
    int64_t address_args,
    int64_t handle_args,
    const MyCacheModeArgs& mode_args,
    std::function<void(ErrorOr<flutter::EncodableList> reply)> result) = 0;
  virtual void GetCharacteristics(
    int64_t address_args,
    int64_t handle_args,
    const MyCacheModeArgs& mode_args,
    std::function<void(ErrorOr<flutter::EncodableList> reply)> result) = 0;
  virtual void GetDescriptors(
    int64_t address_args,
    int64_t handle_args,
    const MyCacheModeArgs& mode_args,
    std::function<void(ErrorOr<flutter::EncodableList> reply)> result) = 0;
  virtual void ReadCharacteristic(
    int64_t address_args,
    int64_t handle_args,
    const MyCacheModeArgs& mode_args,
    std::function<void(ErrorOr<std::vector<uint8_t>> reply)> result) = 0;
  virtual void WriteCharacteristic(
    int64_t address_args,
    int64_t handle_args,
    const std::vector<uint8_t>& value_args,
    const MyGATTCharacteristicWriteTypeArgs& type_args,
    std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual void SetCharacteristicNotifyState(
    int64_t address_args,
    int64_t handle_args,
    const MyGATTCharacteristicNotifyStateArgs& state_args,
    std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual void ReadDescriptor(
    int64_t address_args,
    int64_t handle_args,
    const MyCacheModeArgs& mode_args,
    std::function<void(ErrorOr<std::vector<uint8_t>> reply)> result) = 0;
  virtual void WriteDescriptor(
    int64_t address_args,
    int64_t handle_args,
    const std::vector<uint8_t>& value_args,
    std::function<void(std::optional<FlutterError> reply)> result) = 0;

  // The codec used by MyCentralManagerHostAPI.
  static const flutter::StandardMessageCodec& GetCodec();
  // Sets up an instance of `MyCentralManagerHostAPI` to handle messages through the `binary_messenger`.
  static void SetUp(
    flutter::BinaryMessenger* binary_messenger,
    MyCentralManagerHostAPI* api);
  static void SetUp(
    flutter::BinaryMessenger* binary_messenger,
    MyCentralManagerHostAPI* api,
    const std::string& message_channel_suffix);
  static flutter::EncodableValue WrapError(std::string_view error_message);
  static flutter::EncodableValue WrapError(const FlutterError& error);

 protected:
  MyCentralManagerHostAPI() = default;

};
class MyCentralManagerFlutterAPICodecSerializer : public flutter::StandardCodecSerializer {
 public:
  MyCentralManagerFlutterAPICodecSerializer();
  inline static MyCentralManagerFlutterAPICodecSerializer& GetInstance() {
    static MyCentralManagerFlutterAPICodecSerializer sInstance;
    return sInstance;
  }

  void WriteValue(
    const flutter::EncodableValue& value,
    flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
    uint8_t type,
    flutter::ByteStreamReader* stream) const override;

};

// Generated class from Pigeon that represents Flutter messages that can be called from C++.
class MyCentralManagerFlutterAPI {
 public:
  MyCentralManagerFlutterAPI(flutter::BinaryMessenger* binary_messenger);
  MyCentralManagerFlutterAPI(
    flutter::BinaryMessenger* binary_messenger,
    const std::string& message_channel_suffix);
  static const flutter::StandardMessageCodec& GetCodec();
  void OnStateChanged(
    const MyBluetoothLowEnergyStateArgs& state_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnDiscovered(
    const MyPeripheralArgs& peripheral_args,
    int64_t rssi_args,
    int64_t timestamp_args,
    const MyAdvertisementTypeArgs& type_args,
    const MyAdvertisementArgs& advertisement_args,
    const MyAddressTypeArgs& address_type_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnConnectionStateChanged(
    const MyPeripheralArgs& peripheral_args,
    const MyConnectionStateArgs& state_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnMTUChanged(
    const MyPeripheralArgs& peripheral_args,
    int64_t mtu_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnCharacteristicNotified(
    const MyPeripheralArgs& peripheral_args,
    const MyGATTCharacteristicArgs& characteristic_args,
    const std::vector<uint8_t>& value_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);

 private:
  flutter::BinaryMessenger* binary_messenger_;
  std::string message_channel_suffix_;
};

class MyPeripheralManagerHostAPICodecSerializer : public flutter::StandardCodecSerializer {
 public:
  MyPeripheralManagerHostAPICodecSerializer();
  inline static MyPeripheralManagerHostAPICodecSerializer& GetInstance() {
    static MyPeripheralManagerHostAPICodecSerializer sInstance;
    return sInstance;
  }

  void WriteValue(
    const flutter::EncodableValue& value,
    flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
    uint8_t type,
    flutter::ByteStreamReader* stream) const override;

};

// Generated interface from Pigeon that represents a handler of messages from Flutter.
class MyPeripheralManagerHostAPI {
 public:
  MyPeripheralManagerHostAPI(const MyPeripheralManagerHostAPI&) = delete;
  MyPeripheralManagerHostAPI& operator=(const MyPeripheralManagerHostAPI&) = delete;
  virtual ~MyPeripheralManagerHostAPI() {}
  virtual void Initialize(std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual ErrorOr<MyBluetoothLowEnergyStateArgs> GetState() = 0;
  virtual void AddService(
    const MyMutableGATTServiceArgs& service_args,
    std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual std::optional<FlutterError> RemoveService(int64_t hash_code_args) = 0;
  virtual std::optional<FlutterError> StartAdvertising(const MyAdvertisementArgs& advertisement_args) = 0;
  virtual std::optional<FlutterError> StopAdvertising() = 0;
  virtual ErrorOr<int64_t> GetMaxNotificationSize(int64_t address_args) = 0;
  virtual std::optional<FlutterError> RespondReadRequestWithValue(
    int64_t id_args,
    const std::vector<uint8_t>& value_args) = 0;
  virtual std::optional<FlutterError> RespondReadRequestWithProtocolError(
    int64_t id_args,
    const MyGATTProtocolErrorArgs& error_args) = 0;
  virtual std::optional<FlutterError> RespondWriteRequest(int64_t id_args) = 0;
  virtual std::optional<FlutterError> RespondWriteRequestWithProtocolError(
    int64_t id_args,
    const MyGATTProtocolErrorArgs& error_args) = 0;
  virtual void NotifyValue(
    int64_t address_args,
    int64_t hash_code_args,
    const std::vector<uint8_t>& value_args,
    std::function<void(std::optional<FlutterError> reply)> result) = 0;

  // The codec used by MyPeripheralManagerHostAPI.
  static const flutter::StandardMessageCodec& GetCodec();
  // Sets up an instance of `MyPeripheralManagerHostAPI` to handle messages through the `binary_messenger`.
  static void SetUp(
    flutter::BinaryMessenger* binary_messenger,
    MyPeripheralManagerHostAPI* api);
  static void SetUp(
    flutter::BinaryMessenger* binary_messenger,
    MyPeripheralManagerHostAPI* api,
    const std::string& message_channel_suffix);
  static flutter::EncodableValue WrapError(std::string_view error_message);
  static flutter::EncodableValue WrapError(const FlutterError& error);

 protected:
  MyPeripheralManagerHostAPI() = default;

};
class MyPeripheralManagerFlutterAPICodecSerializer : public flutter::StandardCodecSerializer {
 public:
  MyPeripheralManagerFlutterAPICodecSerializer();
  inline static MyPeripheralManagerFlutterAPICodecSerializer& GetInstance() {
    static MyPeripheralManagerFlutterAPICodecSerializer sInstance;
    return sInstance;
  }

  void WriteValue(
    const flutter::EncodableValue& value,
    flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
    uint8_t type,
    flutter::ByteStreamReader* stream) const override;

};

// Generated class from Pigeon that represents Flutter messages that can be called from C++.
class MyPeripheralManagerFlutterAPI {
 public:
  MyPeripheralManagerFlutterAPI(flutter::BinaryMessenger* binary_messenger);
  MyPeripheralManagerFlutterAPI(
    flutter::BinaryMessenger* binary_messenger,
    const std::string& message_channel_suffix);
  static const flutter::StandardMessageCodec& GetCodec();
  void OnStateChanged(
    const MyBluetoothLowEnergyStateArgs& state_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnMTUChanged(
    const MyCentralArgs& central_args,
    int64_t mtu_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnCharacteristicReadRequest(
    const MyCentralArgs& central_args,
    int64_t hash_code_args,
    const MyGATTReadRequestArgs& request_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnCharacteristicWriteRequest(
    const MyCentralArgs& central_args,
    int64_t hash_code_args,
    const MyGATTWriteRequestArgs& request_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnCharacteristicSubscribedClientsChanged(
    int64_t hash_code_args,
    const flutter::EncodableList& centrals_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnDescriptorReadRequest(
    const MyCentralArgs& central_args,
    int64_t hash_code_args,
    const MyGATTReadRequestArgs& request_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);
  void OnDescriptorWriteRequest(
    const MyCentralArgs& central_args,
    int64_t hash_code_args,
    const MyGATTWriteRequestArgs& request_args,
    std::function<void(void)>&& on_success,
    std::function<void(const FlutterError&)>&& on_error);

 private:
  flutter::BinaryMessenger* binary_messenger_;
  std::string message_channel_suffix_;
};

}  // namespace bluetooth_low_energy_windows
#endif  // PIGEON_MY_API_G_H_
