// 🧬 C++ NESTED STRUCTS & DEPENDENCIES

struct type {
    uint8_t[32]                              __lx; // 0x0
};

struct __value_func_void____ {
    type                                     __buf_; // 0x0
    __base_void____*                         __f_; // 0x20
};

struct function_void____ {
    __value_func_void____                    __f_; // 0x0
};

struct __value_func_void__bool__ {
    type                                     __buf_; // 0x0
    __base_void__bool__*                     __f_; // 0x20
};

struct function_void__bool__ {
    __value_func_void__bool__                __f_; // 0x0
};

struct _ccColorThreeB {
    uint8_t                                  r; // 0x0
    uint8_t                                  g; // 0x1
    uint8_t                                  b; // 0x2
    uint8_t                                  dontUserMe; // 0x3
};

struct shared_ptr_ObjCWrapper_ {
    ObjCWrapper*                             __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct anon_7aac25 {
    uint8_t                                  __is_long_ : 1; // 0x0
    uint8_t                                  __size_ : 7; // 0x0
};

struct __short {
    anon_7aac25                              field_0; // 0x0
    uint8_t[0]                               __padding_; // 0x1
    uint8_t[23]                              __data_; // 0x1
};

struct anon_6f33cc {
    uint64_t                                 __is_long_ : 1; // 0x0
    uint64_t                                 __cap_ : 63; // 0x0
};

struct __long {
    anon_6f33cc                              field_0; // 0x0
    uint64_t                                 __size_; // 0x8
    char*                                    __data_; // 0x10
};

struct __raw {
    uint64_t[3]                              __words; // 0x0
};

union anon_f9a73c {
    __short                                  __s; // 0x0
    __long                                   __l; // 0x0
    __raw                                    __r; // 0x0
};

struct __rep {
    anon_f9a73c                              field_0; // 0x0
};

struct __compressed_pair_std::basic_string_char_::__rep__std::allocator_char__ {
    __rep                                    __value_; // 0x0
};

struct basic_string_char__std::char_traits_char___std::allocator_char__ {
    __compressed_pair_std::basic_string_char_::__rep__std::allocator_char__ __r_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__mc::Value___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::Value___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__mc::Value___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct StringMap {
    __hash_table_std::__hash_value_type_std::string__mc::Value___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::Value___ __table_; // 0x0
};

struct BubblesMapDTO {
    basic_string_char__std::char_traits_char___std::allocator_char__ firstDisplayFtueBubbleId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ rewardUnlockBubbleId; // 0x18
};

struct ActionButtonDTO {
    basic_string_char__std::char_traits_char___std::allocator_char__ buttonId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ buttonLocation; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ fkLoaderId; // 0x30
    basic_string_char__std::char_traits_char___std::allocator_char__ context; // 0x48
    basic_string_char__std::char_traits_char___std::allocator_char__ actionId; // 0x60
    bool                                     shouldShowLoading; // 0x78
    bool                                     shouldShow; // 0x79
    bool                                     shouldShowGenericErrorPopup; // 0x7A
    basic_string_char__std::char_traits_char___std::allocator_char__ buttonCcbi; // 0x80
    basic_string_char__std::char_traits_char___std::allocator_char__ prefab; // 0x98
    basic_string_char__std::char_traits_char___std::allocator_char__ scheduleId; // 0xB0
    basic_string_char__std::char_traits_char___std::allocator_char__ loadingButtonCcb; // 0xC8
    basic_string_char__std::char_traits_char___std::allocator_char__ loadingButtonCcbPrefab; // 0xE0
    bool                                     shouldShowNotificationIcon; // 0xF8
    StringMap                                analyticsData; // 0x100
    BubblesMapDTO                            bubbleMap; // 0x128
};

struct EventWrapper {
    uint64_t                                 _id; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _event; // 0x8
};

struct FlagSet_4UL_ {
    uint8_t[1]                               _data; // 0x0
};

struct Value {
    int64_t                                  _fieldData; // 0x0
    uint8_t                                  _type; // 0x8
    FlagSet_4UL_                             _flags; // 0x9
};

struct __value_func_void__NSString____NSString____ {
    type                                     __buf_; // 0x0
    __base_void__NSString____NSString____*   __f_; // 0x20
};

struct function_void__NSString____NSString____ {
    __value_func_void__NSString____NSString____ __f_; // 0x0
};

struct CGSize {
    double                                   width; // 0x0
    double                                   height; // 0x8
};

struct Date {
    int64_t                                  _time; // 0x0
};

struct __compressed_pair_unsigned_int____std::default_delete_unsigned_int__ {
    uint32_t*                                __value_; // 0x0
};

struct unique_ptr_unsigned_int__std::default_delete_unsigned_int__ {
    __compressed_pair_unsigned_int____std::default_delete_unsigned_int__ __ptr_; // 0x0
};

struct Optional_unsigned_int_ {
    unique_ptr_unsigned_int__std::default_delete_unsigned_int__ _t; // 0x0
};

struct ProgressiveVideoInfo {
    Date                                     timestamp; // 0x0
    uint64_t                                 coinBalance; // 0x8
    Optional_unsigned_int_                   nextStep; // 0x10
    bool                                     isUpdateScheduled; // 0x18
};

struct __compressed_pair_std::string____std::allocator_std::string__ {
    basic_string_char__std::char_traits_char___std::allocator_char__* __value_; // 0x0
};

struct vector_std::string__std::allocator_std::string__ {
    basic_string_char__std::char_traits_char___std::allocator_char__* __begin_; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__* __end_; // 0x8
    __compressed_pair_std::string____std::allocator_std::string__ __end_cap_; // 0x10
};

struct shared_ptr_mc::Task_ {
    Task*                                    __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct shared_ptr_pool::interstitials::InterstitialsController_ {
    InterstitialsController*                 __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __tree_end_node_std::__tree_node_base_void______ {
    __tree_node_base_void___*                __left_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__std::string___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__std::string___std::less_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_std::string__std::string___std::__map_value_compare_std::string__std::__value_type_std::string__std::string___std::less_std::string____std::allocator_std::__value_type_std::string__std::string___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__std::string___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__std::string___std::less_std::string___ __pair3_; // 0x10
};

struct map_std::string__std::string__std::less_std::string___std::allocator_std::pair_const_std::string__std::string___ {
    __tree_std::__value_type_std::string__std::string___std::__map_value_compare_std::string__std::__value_type_std::string__std::string___std::less_std::string____std::allocator_std::__value_type_std::string__std::string___ __tree_; // 0x0
};

struct BannerLayout {
    float                                    maxWidth; // 0x0
    float                                    topOffset; // 0x4
    float                                    leftOffset; // 0x8
    int32_t                                  position; // 0xC
};

struct ShowParams {
    map_std::string__std::string__std::less_std::string___std::allocator_std::pair_const_std::string__std::string___ rewardToken; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ entryPointId; // 0x18
    BannerLayout                             bannerLayout; // 0x30
};

struct MCNumber {
    double                                   mValue; // 0x0
};

struct anon_1e8241 {
    MCNumber                                 x; // 0x0
    MCNumber                                 y; // 0x8
};

struct __compressed_pair_AnimationCallbackDispatcher____std::default_delete_AnimationCallbackDispatcher__ {
    AnimationCallbackDispatcher*             __value_; // 0x0
};

struct unique_ptr_AnimationCallbackDispatcher__std::default_delete_AnimationCallbackDispatcher__ {
    __compressed_pair_AnimationCallbackDispatcher____std::default_delete_AnimationCallbackDispatcher__ __ptr_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::function_void_______std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::function_void_______std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__std::function_void_______std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::function_void_______std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::function_void_______std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__std::function_void_______ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__std::function_void_______void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::function_void_______std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::function_void_______std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__std::function_void______std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__std::function_void_______ {
    __hash_table_std::__hash_value_type_std::string__std::function_void_______std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::function_void_______std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::function_void_______std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__std::function_void_______ __table_; // 0x0
};

struct AvatarsStripNodeBuilder {
    basic_string_char__std::char_traits_char___std::allocator_char__ field_0; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ field_1; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ field_2; // 0x30
    basic_string_char__std::char_traits_char___std::allocator_char__ field_3; // 0x48
    uint64_t                                 field_4; // 0x60
    uint32_t                                 field_5; // 0x68
    uint32_t                                 field_6; // 0x6C
    uint64_t                                 field_7; // 0x70
    bool                                     field_8; // 0x78
    bool                                     field_9; // 0x79
};

struct __compressed_pair_pool::AvatarsStripNodeBuilder____std::allocator_pool::AvatarsStripNodeBuilder__ {
    AvatarsStripNodeBuilder*                 __value_; // 0x0
};

struct vector_pool::AvatarsStripNodeBuilder__std::allocator_pool::AvatarsStripNodeBuilder__ {
    AvatarsStripNodeBuilder*                 __begin_; // 0x0
    AvatarsStripNodeBuilder*                 __end_; // 0x8
    __compressed_pair_pool::AvatarsStripNodeBuilder____std::allocator_pool::AvatarsStripNodeBuilder__ __end_cap_; // 0x10
};

struct AvatarsStripModel {
    int32_t                                  _avatarShape; // 0x0
    int32_t                                  _stripType; // 0x4
    int32_t                                  _orientation; // 0x8
    float                                    _spacing; // 0xC
    bool                                     _displayAvatarStar; // 0x10
    float                                    _numVisibleItems; // 0x14
    CGSize                                   _size; // 0x18
};

struct CGPoint {
    double                                   x; // 0x0
    double                                   y; // 0x8
};

struct anon_f0a793 {
    MCNumber                                 x; // 0x0
    MCNumber                                 y; // 0x8
    MCNumber                                 z; // 0x10
};

struct BallPhysicsProperties {
    anon_1e8241                              position; // 0x0
    anon_1e8241                              velocity; // 0x10
    MCNumber                                 radius; // 0x20
    anon_f0a793                              spin; // 0x28
    MCNumber                                 mass; // 0x40
    MCNumber                                 volume; // 0x48
};

struct __compressed_pair_MCNumberPoint____std::allocator_MCNumberPoint__ {
    anon_5593c3*                             __value_; // 0x0
};

struct vector_MCNumberPoint__std::allocator_MCNumberPoint__ {
    anon_5593c3*                             __begin_; // 0x0
    anon_5593c3*                             __end_; // 0x8
    __compressed_pair_MCNumberPoint____std::allocator_MCNumberPoint__ __end_cap_; // 0x10
};

struct __compressed_pair_pool::customRack::CustomRack____std::default_delete_pool::customRack::CustomRack__ {
    CustomRack*                              __value_; // 0x0
};

struct unique_ptr_pool::customRack::CustomRack__std::default_delete_pool::customRack::CustomRack__ {
    __compressed_pair_pool::customRack::CustomRack____std::default_delete_pool::customRack::CustomRack__ __ptr_; // 0x0
};

struct Pos2D {
    float                                    x; // 0x0
    float                                    y; // 0x4
};

struct GoldenBall {
    Pos2D                                    position; // 0x0
};

struct CueBall {
    Pos2D                                    position; // 0x0
};

struct __compressed_pair_pool::goldenShot::GoldenShotTable::ObstacleBall____std::allocator_pool::goldenShot::GoldenShotTable::ObstacleBall__ {
    ObstacleBall*                            __value_; // 0x0
};

struct vector_pool::goldenShot::GoldenShotTable::ObstacleBall__std::allocator_pool::goldenShot::GoldenShotTable::ObstacleBall__ {
    ObstacleBall*                            __begin_; // 0x0
    ObstacleBall*                            __end_; // 0x8
    __compressed_pair_pool::goldenShot::GoldenShotTable::ObstacleBall____std::allocator_pool::goldenShot::GoldenShotTable::ObstacleBall__ __end_cap_; // 0x10
};

struct Target {
    basic_string_char__std::char_traits_char___std::allocator_char__ id; // 0x0
    float                                    baseRadius; // 0x18
};

struct __compressed_pair_pool::goldenShot::GoldenShotTable::Target____std::allocator_pool::goldenShot::GoldenShotTable::Target__ {
    Target*                                  __value_; // 0x0
};

struct vector_pool::goldenShot::GoldenShotTable::Target__std::allocator_pool::goldenShot::GoldenShotTable::Target__ {
    Target*                                  __begin_; // 0x0
    Target*                                  __end_; // 0x8
    __compressed_pair_pool::goldenShot::GoldenShotTable::Target____std::allocator_pool::goldenShot::GoldenShotTable::Target__ __end_cap_; // 0x10
};

struct TargetArea {
    float                                    scale; // 0x0
    Pos2D                                    position; // 0x4
    vector_pool::goldenShot::GoldenShotTable::Target__std::allocator_pool::goldenShot::GoldenShotTable::Target__ targets; // 0x10
};

struct GoldenShotTable {
    basic_string_char__std::char_traits_char___std::allocator_char__ _id; // 0x0
    GoldenBall                               _goldenBall; // 0x18
    CueBall                                  _cueBall; // 0x20
    vector_pool::goldenShot::GoldenShotTable::ObstacleBall__std::allocator_pool::goldenShot::GoldenShotTable::ObstacleBall__ _obstacleBalls; // 0x28
    TargetArea                               _targetArea; // 0x40
};

struct anon_6f6b35 {
    uint8_t                                  field_0 : 1; // 0x0
    uint8_t                                  field_1 : 7; // 0x0
};

struct anon_049261 {
    uint64_t                                 field_0 : 1; // 0x0
    uint64_t                                 field_1 : 63; // 0x0
};

union anon_588dc6 {
    __short                                  field_0; // 0x0
    __long                                   field_1; // 0x0
    __raw                                    field_2; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::type_index__rules::IRule_____void_____ {
    __tree_end_node_std::__tree_node_base_void______ field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::type_index__std::__value_type_std::type_index__rules::IRule_____std::less_std::type_index___ {
    uint64_t                                 field_0; // 0x0
};

struct __tree_std::__value_type_std::type_index__rules::IRule_____std::__map_value_compare_std::type_index__std::__value_type_std::type_index__rules::IRule_____std::less_std::type_index____std::allocator_std::__value_type_std::type_index__rules::IRule_____ {
    __tree_end_node_std::__tree_node_base_void______* field_0; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::type_index__rules::IRule_____void_____ field_1; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::type_index__std::__value_type_std::type_index__rules::IRule_____std::less_std::type_index___ field_2; // 0x10
};

struct map_std::type_index__rules::IRule____std::less_std::type_index___std::allocator_std::pair_const_std::type_index__rules::IRule_____ {
    __tree_std::__value_type_std::type_index__rules::IRule_____std::__map_value_compare_std::type_index__std::__value_type_std::type_index__rules::IRule_____std::less_std::type_index____std::allocator_std::__value_type_std::type_index__rules::IRule_____ field_0; // 0x0
};

struct __compressed_pair_rules::Rules8BallFoulReason____std::allocator_rules::Rules8BallFoulReason__ {
    int32_t*                                 field_0; // 0x0
};

struct vector_rules::Rules8BallFoulReason__std::allocator_rules::Rules8BallFoulReason__ {
    int32_t*                                 field_0; // 0x0
    int32_t*                                 field_1; // 0x8
    __compressed_pair_rules::Rules8BallFoulReason____std::allocator_rules::Rules8BallFoulReason__ field_2; // 0x10
};

struct __compressed_pair_BallClassification____std::allocator_BallClassification__ {
    int32_t*                                 field_0; // 0x0
};

struct vector_BallClassification__std::allocator_BallClassification__ {
    int32_t*                                 field_0; // 0x0
    int32_t*                                 field_1; // 0x8
    __compressed_pair_BallClassification____std::allocator_BallClassification__ field_2; // 0x10
};

struct __compressed_pair_PoolPlayer_____std::allocator_PoolPlayer____ {
    id*                                      field_0; // 0x0
};

struct vector_PoolPlayer____std::allocator_PoolPlayer____ {
    id*                                      field_0; // 0x0
    id*                                      field_1; // 0x8
    __compressed_pair_PoolPlayer_____std::allocator_PoolPlayer____ field_2; // 0x10
};

struct Ruleset {
    uint32_t                                 field_0; // 0x0
    int32_t                                  field_1; // 0x4
    basic_string_char__std::char_traits_char___std::allocator_char__ field_2; // 0x8
    uint32_t                                 field_3; // 0x20
    map_std::type_index__rules::IRule____std::less_std::type_index___std::allocator_std::pair_const_std::type_index__rules::IRule_____ field_4; // 0x28
    vector_rules::Rules8BallFoulReason__std::allocator_rules::Rules8BallFoulReason__ field_5; // 0x40
    bool                                     field_6; // 0x58
    double                                   field_7; // 0x60
    int32_t                                  field_8; // 0x68
    id                                       field_9; // 0x70
    id                                       field_10; // 0x78
    uint32_t                                 field_11; // 0x80
    id                                       field_12; // 0x88
    uint32_t                                 field_13; // 0x90
    vector_BallClassification__std::allocator_BallClassification__ field_14; // 0x98
    vector_BallClassification__std::allocator_BallClassification__ field_15; // 0xB0
    vector_BallClassification__std::allocator_BallClassification__ field_16; // 0xC8
    vector_PoolPlayer____std::allocator_PoolPlayer____ field_17; // 0xE0
    int32_t                                  field_18; // 0xF8
    int32_t                                  field_19; // 0xFC
    int32_t                                  field_20; // 0x100
    int32_t                                  field_21; // 0x104
    bool                                     field_22; // 0x108
    int32_t                                  field_23; // 0x10C
    int8_t                                   field_24; // 0x110
    int8_t                                   field_25; // 0x111
    bool                                     field_26; // 0x112
    bool                                     field_27; // 0x113
    bool                                     field_28; // 0x114
    uint32_t                                 field_29; // 0x118
    int32_t                                  field_30; // 0x11C
    int8_t                                   field_31; // 0x120
    uint32_t                                 field_32; // 0x124
    bool                                     field_33; // 0x128
    uint32_t                                 field_34; // 0x12C
    bool                                     field_35; // 0x130
};

struct __compressed_pair_CCNode_____std::allocator_CCNode____ {
    id*                                      __value_; // 0x0
};

struct vector_CCNode____std::allocator_CCNode____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_CCNode_____std::allocator_CCNode____ __end_cap_; // 0x10
};

struct __value_func_void__float__ {
    type                                     __buf_; // 0x0
    __base_void__float__*                    __f_; // 0x20
};

struct function_void__float__ {
    __value_func_void__float__               __f_; // 0x0
};

struct duration_long_long__std::ratio_1__1000000000__ {
    int64_t                                  __rep_; // 0x0
};

struct time_point_std::chrono::steady_clock__std::chrono::duration_long_long__std::ratio_1__1000000000___ {
    duration_long_long__std::ratio_1__1000000000__ __d_; // 0x0
};

struct BubbleLayout {
    int32_t                                  _value; // 0x0
};

struct CGRect {
    CGPoint                                  origin; // 0x0
    CGSize                                   size; // 0x10
};

struct ccArray {
    uint64_t                                 field_0; // 0x0
    uint64_t                                 field_1; // 0x8
    id*                                      field_2; // 0x10
};

struct UT_hash_handle {
    UT_hash_table*                           field_0; // 0x0
    void*                                    field_1; // 0x8
    void*                                    field_2; // 0x10
    UT_hash_handle*                          field_3; // 0x18
    UT_hash_handle*                          field_4; // 0x20
    void*                                    field_5; // 0x28
    uint32_t                                 field_6; // 0x30
    uint32_t                                 field_7; // 0x34
};

struct _hashElement {
    ccArray*                                 field_0; // 0x0
    uint64_t                                 field_1; // 0x8
    int8_t                                   field_2; // 0x10
    int8_t                                   field_3; // 0x11
    UT_hash_handle                           field_4; // 0x18
    id                                       field_5; // 0x50
    id                                       field_6; // 0x58
};

struct _ccBlendFunc {
    uint8_t                                  src; // 0x0
    uint8_t                                  dst; // 0x1
};

struct HandleTemplate_mc::renderer::UniformInfo_ {
    uint64_t                                 _key; // 0x0
};

struct anon_52951c {
    float                                    x; // 0x0
    float                                    y; // 0x4
    float                                    z; // 0x8
    float                                    w; // 0xC
};

struct anon_d8c894 {
    float                                    red; // 0x0
    float                                    green; // 0x4
    float                                    blue; // 0x8
    float                                    alpha; // 0xC
};

union anon_194f02 {
    anon_52951c                              field_0; // 0x0
    anon_d8c894                              field_1; // 0x0
    float[4]                                 values; // 0x0
};

struct Point4D_float_ {
    anon_194f02                              field_0; // 0x0
};

struct HandleTemplate_mc::renderer::ShaderBufferInfo_ {
    uint64_t                                 _key; // 0x0
};

struct _ccBezierConfig {
    CGPoint                                  endPosition; // 0x0
    CGPoint                                  controlPoint_1; // 0x10
    CGPoint                                  controlPoint_2; // 0x20
};

struct timeval {
    int64_t                                  tv_sec; // 0x0
    int64_t                                  tv_usec; // 0x8
};

struct __compressed_pair_std::function_void_________std::allocator_std::function_void________ {
    function_void____**                      __value_; // 0x0
};

struct __split_buffer_std::function_void________std::allocator_std::function_void________ {
    function_void____**                      __first_; // 0x0
    function_void____**                      __begin_; // 0x8
    function_void____**                      __end_; // 0x10
    __compressed_pair_std::function_void_________std::allocator_std::function_void________ __end_cap_; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_std::function_void______ {
    uint64_t                                 __value_; // 0x0
};

struct deque_std::function_void______std::allocator_std::function_void______ {
    __split_buffer_std::function_void________std::allocator_std::function_void________ __map_; // 0x0
    uint64_t                                 __start_; // 0x20
    __compressed_pair_unsigned_long__std::allocator_std::function_void______ __size_; // 0x28
};

struct queue_std::function_void______std::deque_std::function_void______ {
    deque_std::function_void______std::allocator_std::function_void______ c; // 0x0
};

struct linear_congruential_engine_unsigned_long__48271UL__0UL__2147483647UL_ {
    uint64_t                                 __x_; // 0x0
};

struct RandomGenerator_std::linear_congruential_engine_unsigned_long__48271__0__2147483647__ {
    linear_congruential_engine_unsigned_long__48271UL__0UL__2147483647UL_ _generator; // 0x0
};

struct _ccVertex2F {
    float                                    x; // 0x0
    float                                    y; // 0x4
};

struct _ccColor4F {
    float                                    r; // 0x0
    float                                    g; // 0x4
    float                                    b; // 0x8
    float                                    a; // 0xC
};

struct __value_func_void__CCMenuItem____ {
    type                                     __buf_; // 0x0
    __base_void__CCMenuItem____*             __f_; // 0x20
};

struct function_void__CCMenuItem____ {
    __value_func_void__CCMenuItem____        __f_; // 0x0
};

struct __compressed_pair_StreakPoint_____std::allocator_StreakPoint____ {
    StreakPoint**                            __value_; // 0x0
};

struct __split_buffer_StreakPoint____std::allocator_StreakPoint____ {
    StreakPoint**                            __first_; // 0x0
    StreakPoint**                            __begin_; // 0x8
    StreakPoint**                            __end_; // 0x10
    __compressed_pair_StreakPoint_____std::allocator_StreakPoint____ __end_cap_; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_StreakPoint__ {
    uint64_t                                 __value_; // 0x0
};

struct deque_StreakPoint__std::allocator_StreakPoint__ {
    __split_buffer_StreakPoint____std::allocator_StreakPoint____ __map_; // 0x0
    uint64_t                                 __start_; // 0x20
    __compressed_pair_unsigned_long__std::allocator_StreakPoint__ __size_; // 0x28
};

struct __compressed_pair__ccV2F_C4B_T2F____std::allocator__ccV2F_C4B_T2F__ {
    _ccV2F_C4B_T2F*                          __value_; // 0x0
};

struct vector__ccV2F_C4B_T2F__std::allocator__ccV2F_C4B_T2F__ {
    _ccV2F_C4B_T2F*                          __begin_; // 0x0
    _ccV2F_C4B_T2F*                          __end_; // 0x8
    __compressed_pair__ccV2F_C4B_T2F____std::allocator__ccV2F_C4B_T2F__ __end_cap_; // 0x10
};

struct Table_true__80UL__mc::renderer::HandleTemplate_mc::renderer::AttributeInfo___mc::renderer::ShaderBufferDataStream__robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::AttributeInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::AttributeInfo___ {
    uint64_t                                 mHashMultiplier; // 0x0
    DataNode_robin_hood::detail::Table_true__80__mc::renderer::HandleTemplate_mc::renderer::AttributeInfo___mc::renderer::ShaderBufferDataStream__robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::AttributeInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::AttributeInfo_____true_* mKeyVals; // 0x8
    char*                                    mInfo; // 0x10
    uint64_t                                 mNumElements; // 0x18
    uint64_t                                 mMask; // 0x20
    uint64_t                                 mMaxNumElementsAllowed; // 0x28
    uint32_t                                 mInfoInc; // 0x30
    uint32_t                                 mInfoHashShift; // 0x34
};

struct Table_true__80UL__mc::renderer::HandleTemplate_mc::renderer::UniformInfo___mc::renderer::HandleTemplate_mc::renderer::TextureInfo___robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::UniformInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::UniformInfo___ {
    uint64_t                                 mHashMultiplier; // 0x0
    DataNode_robin_hood::detail::Table_true__80__mc::renderer::HandleTemplate_mc::renderer::UniformInfo___mc::renderer::HandleTemplate_mc::renderer::TextureInfo___robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::UniformInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::UniformInfo_____true_* mKeyVals; // 0x8
    char*                                    mInfo; // 0x10
    uint64_t                                 mNumElements; // 0x18
    uint64_t                                 mMask; // 0x20
    uint64_t                                 mMaxNumElementsAllowed; // 0x28
    uint32_t                                 mInfoInc; // 0x30
    uint32_t                                 mInfoHashShift; // 0x34
};

struct Table_true__80UL__mc::renderer::HandleTemplate_mc::renderer::UniformInfo___mc::renderer::ShaderUniformValue__robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::UniformInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::UniformInfo___ {
    uint64_t                                 mHashMultiplier; // 0x0
    DataNode_robin_hood::detail::Table_true__80__mc::renderer::HandleTemplate_mc::renderer::UniformInfo___mc::renderer::ShaderUniformValue__robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::UniformInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::UniformInfo_____true_* mKeyVals; // 0x8
    char*                                    mInfo; // 0x10
    uint64_t                                 mNumElements; // 0x18
    uint64_t                                 mMask; // 0x20
    uint64_t                                 mMaxNumElementsAllowed; // 0x28
    uint32_t                                 mInfoInc; // 0x30
    uint32_t                                 mInfoHashShift; // 0x34
};

struct HandleTemplate_mc::renderer::ShaderInfo_ {
    uint64_t                                 _key; // 0x0
};

struct ShaderBufferDataStream {
    HandleTemplate_mc::renderer::ShaderBufferInfo_ bufferHandle; // 0x0
    uint64_t                                 startOffset; // 0x8
    uint64_t                                 stride; // 0x10
    uint8_t                                  componentType; // 0x18
    uint64_t                                 componentsPerElement; // 0x20
    bool                                     normalizeData; // 0x28
};

struct BlendSettings {
    bool                                     Enabled; // 0x0
    uint8_t                                  Source; // 0x1
    uint8_t                                  Destination; // 0x2
    uint8_t                                  AlphaSource; // 0x3
    uint8_t                                  AlphaDestination; // 0x4
};

struct CullingSettings {
    bool                                     Enabled; // 0x0
    uint8_t                                  Mode; // 0x1
};

struct StencilBufferSettings {
    bool                                     Enabled; // 0x0
    uint32_t                                 Mask; // 0x4
    uint8_t                                  Function; // 0x8
    uint32_t                                 FunctionReference; // 0xC
    uint32_t                                 FunctionMask; // 0x10
    uint8_t                                  OnFail; // 0x14
    uint8_t                                  OnFailZ; // 0x15
    uint8_t                                  OnPassZ; // 0x16
};

struct anon_f474ff {
    uint32_t                                 x; // 0x0
    uint32_t                                 y; // 0x4
};

struct anon_82a04b {
    uint32_t                                 width; // 0x0
    uint32_t                                 height; // 0x4
};

union anon_9f483d {
    anon_f474ff                              field_0; // 0x0
    anon_82a04b                              field_1; // 0x0
    uint32_t[2]                              values; // 0x0
};

struct Point2D_unsigned_int_ {
    anon_9f483d                              field_0; // 0x0
};

struct ScissorSettings {
    bool                                     Enabled; // 0x0
    Point2D_unsigned_int_                    LowerLeft; // 0x4
    Point2D_unsigned_int_                    Dimensions; // 0xC
};

struct ViewportSettings {
    bool                                     Enabled; // 0x0
    Point2D_unsigned_int_                    LowerLeft; // 0x4
    Point2D_unsigned_int_                    Dimensions; // 0xC
};

struct DepthTestSettings {
    bool                                     Enabled; // 0x0
    uint8_t                                  Mode; // 0x1
};

struct HandleTemplate_mc::renderer::FramebufferInfo_ {
    uint64_t                                 _key; // 0x0
};

struct FramebufferSettings {
    HandleTemplate_mc::renderer::FramebufferInfo_ targetFramebuffer; // 0x0
};

struct RenderState {
    BlendSettings                            Blending; // 0x0
    CullingSettings                          Culling; // 0x5
    StencilBufferSettings                    Stencil; // 0x8
    ScissorSettings                          Scissor; // 0x20
    ViewportSettings                         Viewport; // 0x34
    DepthTestSettings                        DepthTest; // 0x48
    FramebufferSettings                      Framebuffer; // 0x50
};

struct RenderCommand {
    Table_true__80UL__mc::renderer::HandleTemplate_mc::renderer::AttributeInfo___mc::renderer::ShaderBufferDataStream__robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::AttributeInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::AttributeInfo___ shaderBufferBindings; // 0x0
    Table_true__80UL__mc::renderer::HandleTemplate_mc::renderer::UniformInfo___mc::renderer::HandleTemplate_mc::renderer::TextureInfo___robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::UniformInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::UniformInfo___ textureBindings; // 0x38
    Table_true__80UL__mc::renderer::HandleTemplate_mc::renderer::UniformInfo___mc::renderer::ShaderUniformValue__robin_hood::hash_mc::renderer::HandleTemplate_mc::renderer::UniformInfo____std::equal_to_mc::renderer::HandleTemplate_mc::renderer::UniformInfo___ uniformValues; // 0x70
    HandleTemplate_mc::renderer::ShaderInfo_ shader; // 0xA8
    ShaderBufferDataStream                   indexBufferBinding; // 0xB0
    uint8_t                                  primitive; // 0xE0
    RenderState                              state; // 0xE8
    uint32_t                                 vertexCount; // 0x140
    uint32_t                                 startVertex; // 0x144
};

struct Table_true__80UL__std::string__mc::renderer::ShaderBufferDataStream__robin_hood::hash_std::string___std::equal_to_std::string__ {
    uint64_t                                 mHashMultiplier; // 0x0
    DataNode_robin_hood::detail::Table_true__80__std::string__mc::renderer::ShaderBufferDataStream__robin_hood::hash_std::string___std::equal_to_std::string____true_* mKeyVals; // 0x8
    char*                                    mInfo; // 0x10
    uint64_t                                 mNumElements; // 0x18
    uint64_t                                 mMask; // 0x20
    uint64_t                                 mMaxNumElementsAllowed; // 0x28
    uint32_t                                 mInfoInc; // 0x30
    uint32_t                                 mInfoHashShift; // 0x34
};

struct Table_true__80UL__std::string__mc::renderer::ShaderUniformValue__robin_hood::hash_std::string___std::equal_to_std::string__ {
    uint64_t                                 mHashMultiplier; // 0x0
    DataNode_robin_hood::detail::Table_true__80__std::string__mc::renderer::ShaderUniformValue__robin_hood::hash_std::string___std::equal_to_std::string____true_* mKeyVals; // 0x8
    char*                                    mInfo; // 0x10
    uint64_t                                 mNumElements; // 0x18
    uint64_t                                 mMask; // 0x20
    uint64_t                                 mMaxNumElementsAllowed; // 0x28
    uint32_t                                 mInfoInc; // 0x30
    uint32_t                                 mInfoHashShift; // 0x34
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::less_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___std::less_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo____std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::less_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ __pair3_; // 0x10
};

struct set_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___std::less_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo____std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ {
    __tree_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___std::less_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo____std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ __tree_; // 0x0
};

struct RenderJob {
    RenderCommand                            renderCommand; // 0x0
    Table_true__80UL__std::string__mc::renderer::ShaderBufferDataStream__robin_hood::hash_std::string___std::equal_to_std::string__ _unresolvedStreamBindings; // 0x148
    Table_true__80UL__std::string__mc::renderer::ShaderUniformValue__robin_hood::hash_std::string___std::equal_to_std::string__ _unresolvedUniformValues; // 0x180
    set_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___std::less_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo____std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ _ownedShaderBuffers; // 0x1B8
    bool                                     dirtyShaderBindings; // 0x1D0
    bool                                     dirtyUniformBindings; // 0x1D1
    bool                                     _ownsIndexBuffer; // 0x1D2
    RenderState                              state; // 0x1D8
};

struct anon_1ba7d3 {
    double                                   a; // 0x0
    double                                   b; // 0x8
    double                                   c; // 0x10
    double                                   d; // 0x18
    double                                   tx; // 0x20
    double                                   ty; // 0x28
};

struct __hash_node_base_std::__hash_node_id_CCNodeEventHandling___void______ {
    __hash_node_base_std::__hash_node_id_CCNodeEventHandling___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void___________ {
    __hash_node_base_std::__hash_node_id_CCNodeEventHandling___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void________std::allocator_std::__hash_node_id_CCNodeEventHandling___void_____ {
    __hash_node_base_std::__hash_node_id_CCNodeEventHandling___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::hash_id_CCNodeEventHandling___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::equal_to_id_CCNodeEventHandling___ {
    float                                    __value_; // 0x0
};

struct __hash_table_id_CCNodeEventHandling___std::hash_id_CCNodeEventHandling____std::equal_to_id_CCNodeEventHandling____std::allocator_id_CCNodeEventHandling___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_id_CCNodeEventHandling___void________std::allocator_std::__hash_node_id_CCNodeEventHandling___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::hash_id_CCNodeEventHandling___ __p2_; // 0x18
    __compressed_pair_float__std::equal_to_id_CCNodeEventHandling___ __p3_; // 0x20
};

struct unordered_set_id_CCNodeEventHandling___std::hash_id_CCNodeEventHandling____std::equal_to_id_CCNodeEventHandling____std::allocator_id_CCNodeEventHandling___ {
    __hash_table_id_CCNodeEventHandling___std::hash_id_CCNodeEventHandling____std::equal_to_id_CCNodeEventHandling____std::allocator_id_CCNodeEventHandling___ __table_; // 0x0
};

struct shared_ptr_CCNodeWeakHandle_ {
    CCNodeWeakHandle*                        __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct anon_c3fea1 {
    CGPoint                                  gravity; // 0x0
    float                                    speed; // 0x10
    float                                    speedVar; // 0x14
    float                                    tangentialAccel; // 0x18
    float                                    tangentialAccelVar; // 0x1C
    float                                    radialAccel; // 0x20
    float                                    radialAccelVar; // 0x24
};

struct anon_d656dd {
    float                                    startRadius; // 0x0
    float                                    startRadiusVar; // 0x4
    float                                    endRadius; // 0x8
    float                                    endRadiusVar; // 0xC
    float                                    rotatePerSecond; // 0x10
    float                                    rotatePerSecondVar; // 0x14
};

union anon_f71ed9 {
    anon_c3fea1                              A; // 0x0
    anon_d656dd                              B; // 0x0
};

struct anon_2ad59a {
    CGPoint                                  field_0; // 0x0
    float                                    field_1; // 0x10
    float                                    field_2; // 0x14
};

struct anon_12b2d8 {
    float                                    field_0; // 0x0
    float                                    field_1; // 0x4
    float                                    field_2; // 0x8
    float                                    field_3; // 0xC
};

union anon_2b29bf {
    anon_2ad59a                              field_0; // 0x0
    anon_12b2d8                              field_1; // 0x0
};

struct sCCParticle {
    CGPoint                                  field_0; // 0x0
    CGPoint                                  field_1; // 0x10
    _ccColor4F                               field_2; // 0x20
    _ccColor4F                               field_3; // 0x30
    float                                    field_4; // 0x40
    float                                    field_5; // 0x44
    float                                    field_6; // 0x48
    float                                    field_7; // 0x4C
    double                                   field_8; // 0x50
    uint64_t                                 field_9; // 0x58
    anon_2b29bf                              field_10; // 0x60
};

struct _ccVertex3F {
    float                                    field_0; // 0x0
    float                                    field_1; // 0x4
    float                                    field_2; // 0x8
};

struct _ccColor4B {
    uint8_t                                  field_0; // 0x0
    uint8_t                                  field_1; // 0x1
    uint8_t                                  field_2; // 0x2
    uint8_t                                  field_3; // 0x3
};

struct _ccTex2F {
    float                                    field_0; // 0x0
    float                                    field_1; // 0x4
};

struct _ccV3F_C4B_T2F {
    _ccVertex3F                              field_0; // 0x0
    _ccColor4B                               field_1; // 0xC
    _ccTex2F                                 field_2; // 0x10
};

struct _ccV3F_C4B_T2F_Quad {
    _ccV3F_C4B_T2F                           field_0; // 0x0
    _ccV3F_C4B_T2F                           field_1; // 0x18
    _ccV3F_C4B_T2F                           field_2; // 0x30
    _ccV3F_C4B_T2F                           field_3; // 0x48
};

struct anon_45ae9c {
    float                                    x; // 0x0
    float                                    y; // 0x4
};

struct anon_f1e321 {
    float                                    width; // 0x0
    float                                    height; // 0x4
};

union anon_64cf9b {
    anon_45ae9c                              field_0; // 0x0
    anon_f1e321                              field_1; // 0x0
    float[2]                                 values; // 0x0
};

struct Point2D_float_ {
    anon_64cf9b                              field_0; // 0x0
};

struct __compressed_pair__ccV2F_T2F____std::allocator__ccV2F_T2F__ {
    _ccV2F_T2F*                              __value_; // 0x0
};

struct vector__ccV2F_T2F__std::allocator__ccV2F_T2F__ {
    _ccV2F_T2F*                              __begin_; // 0x0
    _ccV2F_T2F*                              __end_; // 0x8
    __compressed_pair__ccV2F_T2F____std::allocator__ccV2F_T2F__ __end_cap_; // 0x10
};

struct __list_node_base_mc::renderer::RenderPipeline::RenderPipelineAction__void___ {
    __list_node_base_mc::renderer::RenderPipeline::RenderPipelineAction__void___* __prev_; // 0x0
    __list_node_base_mc::renderer::RenderPipeline::RenderPipelineAction__void___* __next_; // 0x8
};

struct __compressed_pair_unsigned_long__std::allocator_std::__list_node_mc::renderer::RenderPipeline::RenderPipelineAction__void_____ {
    uint64_t                                 __value_; // 0x0
};

struct list_mc::renderer::RenderPipeline::RenderPipelineAction__std::allocator_mc::renderer::RenderPipeline::RenderPipelineAction__ {
    __list_node_base_mc::renderer::RenderPipeline::RenderPipelineAction__void___ __end_; // 0x0
    __compressed_pair_unsigned_long__std::allocator_std::__list_node_mc::renderer::RenderPipeline::RenderPipelineAction__void_____ __size_alloc_; // 0x10
};

struct anon_409305 {
    Point4D_float_                           color; // 0x0
    int32_t                                  stencilClearValue; // 0x10
    int32_t                                  stencilMask; // 0x14
    float                                    depthClearValue; // 0x18
};

struct RenderPipeline {
    RenderState                              desiredState; // 0x0
    bool                                     shouldOverrideBlending; // 0x58
    bool                                     shouldOverrideCulling; // 0x59
    bool                                     shouldOverrideStencil; // 0x5A
    bool                                     shouldOverrideScissor; // 0x5B
    bool                                     shouldOverrideViewport; // 0x5C
    bool                                     shouldOverrideDepthTest; // 0x5D
    bool                                     shouldOverrideFramebuffer; // 0x5E
    list_mc::renderer::RenderPipeline::RenderPipelineAction__std::allocator_mc::renderer::RenderPipeline::RenderPipelineAction__ _queue; // 0x60
    anon_409305                              clearSettings; // 0x78
    bool                                     _shouldClearColorBuffer; // 0x94
    bool                                     _shouldClearStencilBuffer; // 0x95
    bool                                     _shouldClearDepthBuffer; // 0x96
};

struct _listEntry {
    _listEntry*                              field_0; // 0x0
    _listEntry*                              field_1; // 0x8
    void**                                   field_2; // 0x10
    id                                       field_3; // 0x18
    int64_t                                  field_4; // 0x20
    int8_t                                   field_5; // 0x28
    int8_t                                   field_6; // 0x29
};

struct _hashUpdateEntry {
    _listEntry**                             field_0; // 0x0
    _listEntry*                              field_1; // 0x8
    id                                       field_2; // 0x10
    UT_hash_handle                           field_3; // 0x18
};

struct _hashSelectorEntry {
    ccArray*                                 field_0; // 0x0
    id                                       field_1; // 0x8
    uint32_t                                 field_2; // 0x10
    id                                       field_3; // 0x18
    int8_t                                   field_4; // 0x20
    int8_t                                   field_5; // 0x21
    UT_hash_handle                           field_6; // 0x28
};

struct __compressed_pair_int____std::allocator_int__ {
    int32_t*                                 __value_; // 0x0
};

struct vector_int__std::allocator_int__ {
    int32_t*                                 __begin_; // 0x0
    int32_t*                                 __end_; // 0x8
    __compressed_pair_int____std::allocator_int__ __end_cap_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____pair_hash__std::equal_to_std::pair_std::string__std::string____ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____std::equal_to_std::pair_std::string__std::string____pair_hash__ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____std::__unordered_map_hasher_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____pair_hash__std::equal_to_std::pair_std::string__std::string_____std::__unordered_map_equal_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____std::equal_to_std::pair_std::string__std::string____pair_hash___std::allocator_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____pair_hash__std::equal_to_std::pair_std::string__std::string____ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____std::equal_to_std::pair_std::string__std::string____pair_hash__ __p3_; // 0x20
};

struct unordered_map_std::pair_std::string__std::string___CCSpriteFrame____pair_hash__std::equal_to_std::pair_std::string__std::string____std::allocator_std::pair_const_std::pair_std::string__std::string___CCSpriteFrame_____ {
    __hash_table_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____std::__unordered_map_hasher_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____pair_hash__std::equal_to_std::pair_std::string__std::string_____std::__unordered_map_equal_std::pair_std::string__std::string___std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____std::equal_to_std::pair_std::string__std::string____pair_hash___std::allocator_std::__hash_value_type_std::pair_std::string__std::string___CCSpriteFrame_____ __table_; // 0x0
};

struct SnapParameters {
    float                                    leftSnapCell; // 0x0
    float                                    rightSnapCell; // 0x4
    float                                    rightSnapThreshold; // 0x8
    float                                    leftSnapThreshold; // 0xC
    float                                    snapCellLeftOffset; // 0x10
    float                                    snapCellRightOffset; // 0x14
    bool                                     doesTableEndAfterSnapCell; // 0x18
};

struct HandleTemplate_mc::renderer::TextureInfo_ {
    uint64_t                                 _key; // 0x0
};

struct __hash_node_base_std::__hash_node_CCNode____void______ {
    __hash_node_base_std::__hash_node_CCNode____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_CCNode____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void___________ {
    __hash_node_base_std::__hash_node_CCNode____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_CCNode____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_CCNode____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_CCNode____void________std::allocator_std::__hash_node_CCNode____void_____ {
    __hash_node_base_std::__hash_node_CCNode____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::hash_CCNode____ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::equal_to_CCNode____ {
    float                                    __value_; // 0x0
};

struct __hash_table_CCNode____std::hash_CCNode_____std::equal_to_CCNode_____std::allocator_CCNode____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_CCNode____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_CCNode____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_CCNode____void________std::allocator_std::__hash_node_CCNode____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::hash_CCNode____ __p2_; // 0x18
    __compressed_pair_float__std::equal_to_CCNode____ __p3_; // 0x20
};

struct unordered_set_CCNode____std::hash_CCNode_____std::equal_to_CCNode_____std::allocator_CCNode____ {
    __hash_table_CCNode____std::hash_CCNode_____std::equal_to_CCNode_____std::allocator_CCNode____ __table_; // 0x0
};

struct ccTouchHandlerHelperData {
    SEL                                      touchesSel; // 0x0
    SEL                                      touchSel; // 0x8
    int32_t                                  type; // 0x10
};

struct anon_477f0a {
    uint8_t                                  byte0; // 0x0
    uint8_t                                  byte1; // 0x1
    uint8_t                                  byte2; // 0x2
    uint8_t                                  byte3; // 0x3
    uint8_t                                  byte4; // 0x4
    uint8_t                                  byte5; // 0x5
    uint8_t                                  byte6; // 0x6
    uint8_t                                  byte7; // 0x7
    uint8_t                                  byte8; // 0x8
    uint8_t                                  byte9; // 0x9
    uint8_t                                  byte10; // 0xA
    uint8_t                                  byte11; // 0xB
    uint8_t                                  byte12; // 0xC
    uint8_t                                  byte13; // 0xD
    uint8_t                                  byte14; // 0xE
    uint8_t                                  byte15; // 0xF
};

struct SpriteInfo {
    basic_string_char__std::char_traits_char___std::allocator_char__ fileName; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ plistName; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ frameName; // 0x30
};

struct RepeatedPtrField_leaderboard_entry_ {
    void**                                   elements_; // 0x0
    int32_t                                  current_size_; // 0x8
    int32_t                                  allocated_size_; // 0xC
    int32_t                                  total_size_; // 0x10
};

struct championship_info {
    void***                                  _vptr_MessageLite; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _unknown_fields_; // 0x8
    uint32_t[1]                              _has_bits_; // 0x20
    int32_t                                  _cached_size_; // 0x24
    championship_state*                      state_; // 0x28
    championship_user_info*                  user_info_; // 0x30
    RepeatedPtrField_leaderboard_entry_      top_players_; // 0x38
};

struct UserMessageInfoDTO {
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x0
    bool                                     isOwnMessage; // 0x18
};

struct shared_ptr_ChatCellEmoteWrapper_ {
    ChatCellEmoteWrapper*                    __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________std::less_mc::clubs::MessageType___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________std::less_mc::clubs::MessageType____std::allocator_std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________std::less_mc::clubs::MessageType___ __pair3_; // 0x10
};

struct map_mc::clubs::MessageType__std::function_mc::clubs::IMessageView_______std::less_mc::clubs::MessageType___std::allocator_std::pair_const_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________ {
    __tree_std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________std::less_mc::clubs::MessageType____std::allocator_std::__value_type_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________ __tree_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______std::less_mc::clubs::MessageType___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______std::less_mc::clubs::MessageType____std::allocator_std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______std::less_mc::clubs::MessageType___ __pair3_; // 0x10
};

struct map_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView_____std::less_mc::clubs::MessageType___std::allocator_std::pair_const_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______ {
    __tree_std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______std::__map_value_compare_mc::clubs::MessageType__std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______std::less_mc::clubs::MessageType____std::allocator_std::__value_type_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______ __tree_; // 0x0
};

struct MessageViewFactory {
    map_mc::clubs::MessageType__std::function_mc::clubs::IMessageView_______std::less_mc::clubs::MessageType___std::allocator_std::pair_const_mc::clubs::MessageType__std::function_mc::clubs::IMessageView________ _map; // 0x0
    map_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView_____std::less_mc::clubs::MessageType___std::allocator_std::pair_const_mc::clubs::MessageType__std::vector_mc::clubs::IMessageView______ _pool; // 0x18
};

struct __compressed_pair_mc::clubs::ClubMember____std::allocator_mc::clubs::ClubMember__ {
    ClubMember*                              __value_; // 0x0
};

struct vector_mc::clubs::ClubMember__std::allocator_mc::clubs::ClubMember__ {
    ClubMember*                              __begin_; // 0x0
    ClubMember*                              __end_; // 0x8
    __compressed_pair_mc::clubs::ClubMember____std::allocator_mc::clubs::ClubMember__ __end_cap_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_int___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_int___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__unsigned_int___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_int___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_int___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__unsigned_int___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__unsigned_int___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_int___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_int___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__unsigned_int__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__unsigned_int___ {
    __hash_table_std::__hash_value_type_std::string__unsigned_int___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_int___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_int___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__unsigned_int___ __table_; // 0x0
};

struct ClubInfo {
    basic_string_char__std::char_traits_char___std::allocator_char__ _id; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _name; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ _description; // 0x30
    basic_string_char__std::char_traits_char___std::allocator_char__ _location; // 0x48
    int32_t                                  _type; // 0x60
    uint64_t                                 _winningsRequired; // 0x68
    basic_string_char__std::char_traits_char___std::allocator_char__ _creatorId; // 0x70
    uint32_t                                 _league; // 0x88
    vector_mc::clubs::ClubMember__std::allocator_mc::clubs::ClubMember__ _members; // 0x90
    unordered_map_std::string__unsigned_int__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__unsigned_int___ _bannedUserTimestamps; // 0xA8
    uint64_t                                 _totalWinnings; // 0xD0
    int32_t                                  _avatarId; // 0xD8
};

struct IChatModel {
    void***                                  field_0; // 0x0
};

struct __hash_node_base_std::__hash_node_unsigned_long_long__void______ {
    __hash_node_base_std::__hash_node_unsigned_long_long__void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_unsigned_long_long__void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void___________ {
    __hash_node_base_std::__hash_node_unsigned_long_long__void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_unsigned_long_long__void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_unsigned_long_long__void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_unsigned_long_long__void________std::allocator_std::__hash_node_unsigned_long_long__void_____ {
    __hash_node_base_std::__hash_node_unsigned_long_long__void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::hash_unsigned_long_long__ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::equal_to_unsigned_long_long__ {
    float                                    __value_; // 0x0
};

struct __hash_table_unsigned_long_long__std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___std::allocator_unsigned_long_long__ {
    unique_ptr_std::__hash_node_base_std::__hash_node_unsigned_long_long__void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_unsigned_long_long__void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_unsigned_long_long__void________std::allocator_std::__hash_node_unsigned_long_long__void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::hash_unsigned_long_long__ __p2_; // 0x18
    __compressed_pair_float__std::equal_to_unsigned_long_long__ __p3_; // 0x20
};

struct unordered_set_unsigned_long_long__std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___std::allocator_unsigned_long_long__ {
    __hash_table_unsigned_long_long__std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___std::allocator_unsigned_long_long__ __table_; // 0x0
};

struct __compressed_pair_pool::cheering::ReceivedGiftDTO____std::allocator_pool::cheering::ReceivedGiftDTO__ {
    ReceivedGiftDTO*                         __value_; // 0x0
};

struct vector_pool::cheering::ReceivedGiftDTO__std::allocator_pool::cheering::ReceivedGiftDTO__ {
    ReceivedGiftDTO*                         __begin_; // 0x0
    ReceivedGiftDTO*                         __end_; // 0x8
    __compressed_pair_pool::cheering::ReceivedGiftDTO____std::allocator_pool::cheering::ReceivedGiftDTO__ __end_cap_; // 0x10
};

struct __compressed_pair_std::unique_ptr_pool::CheerGiftData_____std::allocator_std::unique_ptr_pool::CheerGiftData___ {
    unique_ptr_pool::CheerGiftData__std::default_delete_pool::CheerGiftData__* __value_; // 0x0
};

struct vector_std::unique_ptr_pool::CheerGiftData___std::allocator_std::unique_ptr_pool::CheerGiftData___ {
    unique_ptr_pool::CheerGiftData__std::default_delete_pool::CheerGiftData__* __begin_; // 0x0
    unique_ptr_pool::CheerGiftData__std::default_delete_pool::CheerGiftData__* __end_; // 0x8
    __compressed_pair_std::unique_ptr_pool::CheerGiftData_____std::allocator_std::unique_ptr_pool::CheerGiftData___ __end_cap_; // 0x10
};

struct __compressed_pair_CheerFeedbackActiveItem____std::allocator_CheerFeedbackActiveItem__ {
    CheerFeedbackActiveItem*                 __value_; // 0x0
};

struct vector_CheerFeedbackActiveItem__std::allocator_CheerFeedbackActiveItem__ {
    CheerFeedbackActiveItem*                 __begin_; // 0x0
    CheerFeedbackActiveItem*                 __end_; // 0x8
    __compressed_pair_CheerFeedbackActiveItem____std::allocator_CheerFeedbackActiveItem__ __end_cap_; // 0x10
};

struct AccountInfoDTO {
    basic_string_char__std::char_traits_char___std::allocator_char__ accountType; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ playerName; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x30
    uint64_t                                 coins; // 0x48
    uint64_t                                 cash; // 0x50
    int32_t                                  league; // 0x58
    int32_t                                  level; // 0x5C
};

struct __compressed_pair_unsigned_long_long____std::allocator_unsigned_long_long__ {
    uint64_t*                                __value_; // 0x0
};

struct vector_unsigned_long_long__std::allocator_unsigned_long_long__ {
    uint64_t*                                __begin_; // 0x0
    uint64_t*                                __end_; // 0x8
    __compressed_pair_unsigned_long_long____std::allocator_unsigned_long_long__ __end_cap_; // 0x10
};

struct ClubFullView {
    id                                       field_0; // 0x0
};

struct ClubsConfirmationPopupController {
    id                                       field_0; // 0x0
    function_void__bool__                    field_1; // 0x8
};

struct shared_ptr_mc::clubs::NotificationView_ {
    NotificationView*                        __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct ClubsGenericMessageController {
    id                                       field_0; // 0x0
    bool                                     field_1; // 0x8
    function_void____                        field_2; // 0x10
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_unsigned_long_long__void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::less_unsigned_long_long__ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_unsigned_long_long__std::less_unsigned_long_long___std::allocator_unsigned_long_long__ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_unsigned_long_long__void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::less_unsigned_long_long__ __pair3_; // 0x10
};

struct set_unsigned_long_long__std::less_unsigned_long_long___std::allocator_unsigned_long_long__ {
    __tree_unsigned_long_long__std::less_unsigned_long_long___std::allocator_unsigned_long_long__ __tree_; // 0x0
};

struct __compressed_pair_OptionExpandComponentParameter_____std::allocator_OptionExpandComponentParameter____ {
    id*                                      __value_; // 0x0
};

struct vector_OptionExpandComponentParameter____std::allocator_OptionExpandComponentParameter____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_OptionExpandComponentParameter_____std::allocator_OptionExpandComponentParameter____ __end_cap_; // 0x10
};

struct __compressed_pair_std::string____std::default_delete_std::string__ {
    basic_string_char__std::char_traits_char___std::allocator_char__* __value_; // 0x0
};

struct unique_ptr_std::string__std::default_delete_std::string__ {
    __compressed_pair_std::string____std::default_delete_std::string__ __ptr_; // 0x0
};

struct Optional_std::string_ {
    unique_ptr_std::string__std::default_delete_std::string__ _t; // 0x0
};

struct SearchRange {
    uint32_t                                 min; // 0x0
    Optional_unsigned_int_                   max; // 0x8
};

struct __compressed_pair_mc::clubs::SearchRange____std::default_delete_mc::clubs::SearchRange__ {
    SearchRange*                             __value_; // 0x0
};

struct unique_ptr_mc::clubs::SearchRange__std::default_delete_mc::clubs::SearchRange__ {
    __compressed_pair_mc::clubs::SearchRange____std::default_delete_mc::clubs::SearchRange__ __ptr_; // 0x0
};

struct Optional_mc::clubs::SearchRange_ {
    unique_ptr_mc::clubs::SearchRange__std::default_delete_mc::clubs::SearchRange__ _t; // 0x0
};

struct __compressed_pair_mc::clubs::ClubType____std::allocator_mc::clubs::ClubType__ {
    int32_t*                                 __value_; // 0x0
};

struct vector_mc::clubs::ClubType__std::allocator_mc::clubs::ClubType__ {
    int32_t*                                 __begin_; // 0x0
    int32_t*                                 __end_; // 0x8
    __compressed_pair_mc::clubs::ClubType____std::allocator_mc::clubs::ClubType__ __end_cap_; // 0x10
};

struct SearchParams {
    Optional_std::string_                    searchString; // 0x0
    Optional_std::string_                    clubLocation; // 0x8
    Optional_mc::clubs::SearchRange_         clubWinnings; // 0x10
    SearchRange                              leagueRange; // 0x18
    SearchRange                              numberOfMembersRange; // 0x28
    vector_mc::clubs::ClubType__std::allocator_mc::clubs::ClubType__ clubTypes; // 0x38
};

struct __compressed_pair_mc::clubs::SortingCriteria____std::default_delete_mc::clubs::SortingCriteria__ {
    SortingCriteria*                         __value_; // 0x0
};

struct unique_ptr_mc::clubs::SortingCriteria__std::default_delete_mc::clubs::SortingCriteria__ {
    __compressed_pair_mc::clubs::SortingCriteria____std::default_delete_mc::clubs::SortingCriteria__ __ptr_; // 0x0
};

struct Optional_mc::clubs::SortingCriteria_ {
    unique_ptr_mc::clubs::SortingCriteria__std::default_delete_mc::clubs::SortingCriteria__ _t; // 0x0
};

struct ClubsSearchHandler {
    uint64_t                                 _requestId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _searchCursor; // 0x8
    SearchParams                             _params; // 0x20
    Optional_mc::clubs::SortingCriteria_     _sortingCriteria; // 0x70
};

struct SwitchParameters {
    uint64_t                                 selectedIndex; // 0x0
    NSString*                                debugTag; // 0x8
};

struct ButtonParameters {
    NSString*                                defaultValueString; // 0x0
    NSString*                                labelString; // 0x8
    NSString*                                debugTag; // 0x10
};

struct shared_ptr_ClubsTableComponentWrapper_ {
    ClubsTableComponentWrapper*              __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct CueStats {
    int32_t                                  power; // 0x0
    int32_t                                  aim; // 0x4
    int32_t                                  spin; // 0x8
    int32_t                                  time; // 0xC
};

struct anon_f7ed3d {
    MCNumber                                 width; // 0x0
    MCNumber                                 height; // 0x8
};

struct MCRect {
    anon_1e8241                              origin; // 0x0
    anon_f7ed3d                              size; // 0x10
};

struct RoadProgressionScreenShortcut {
    int32_t                                  shortcutType; // 0x0
    float                                    jumpCellIndex; // 0x4
};

struct __compressed_pair_pool::victory::VisualCueData____std::default_delete_pool::victory::VisualCueData__ {
    VisualCueData*                           __value_; // 0x0
};

struct unique_ptr_pool::victory::VisualCueData__std::default_delete_pool::victory::VisualCueData__ {
    __compressed_pair_pool::victory::VisualCueData____std::default_delete_pool::victory::VisualCueData__ __ptr_; // 0x0
};

struct TransactionHandler {
    basic_string_char__std::char_traits_char___std::allocator_char__ field_0; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ field_1; // 0x18
};

struct __compressed_pair_PoolTransactions::TransactionHandler____std::default_delete_PoolTransactions::TransactionHandler__ {
    TransactionHandler*                      __value_; // 0x0
};

struct unique_ptr_PoolTransactions::TransactionHandler__std::default_delete_PoolTransactions::TransactionHandler__ {
    __compressed_pair_PoolTransactions::TransactionHandler____std::default_delete_PoolTransactions::TransactionHandler__ __ptr_; // 0x0
};

struct __compressed_pair_pool::CollectionCuePowerIcons____std::default_delete_pool::CollectionCuePowerIcons__ {
    CollectionCuePowerIcons*                 __value_; // 0x0
};

struct unique_ptr_pool::CollectionCuePowerIcons__std::default_delete_pool::CollectionCuePowerIcons__ {
    __compressed_pair_pool::CollectionCuePowerIcons____std::default_delete_pool::CollectionCuePowerIcons__ __ptr_; // 0x0
};

struct CueRenderOptions {
    float                                    bottomClipRatio; // 0x0
    float                                    verticalOffset; // 0x4
    float                                    renderPercentage; // 0x8
    float                                    horizontalOffset; // 0xC
    float                                    horizontalOffsetFactor; // 0x10
    float                                    tailAxialOffset; // 0x14
};

struct CueWidgetDTO {
    int32_t                                  cueProductId; // 0x0
    int32_t                                  cueId; // 0x4
    int32_t                                  cueLevel; // 0x8
    id<ReplaceableSpriteDelegate>            delegate; // 0x10
    CCSprite*                                temporarySprite; // 0x18
    NSDictionary*                            spriteDef; // 0x20
    bool                                     isTableSprite; // 0x28
    bool                                     disableBaseSpriteEffect; // 0x29
    bool                                     loadedFromCcb; // 0x2A
};

struct Selections {
    basic_string_char__std::char_traits_char___std::allocator_char__ search; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ collection; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ category; // 0x30
    basic_string_char__std::char_traits_char___std::allocator_char__ sort; // 0x48
    bool                                     reverse; // 0x60
};

struct CupsCounter {
    int32_t                                  gold; // 0x0
    int32_t                                  silver; // 0x4
    int32_t                                  bronze; // 0x8
};

struct __compressed_pair_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char_____std::allocator_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___ {
    pair_pool::cup_product_utils::CupProductDTO__unsigned_char_* __value_; // 0x0
};

struct vector_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___std::allocator_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___ {
    pair_pool::cup_product_utils::CupProductDTO__unsigned_char_* __begin_; // 0x0
    pair_pool::cup_product_utils::CupProductDTO__unsigned_char_* __end_; // 0x8
    __compressed_pair_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char_____std::allocator_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___ __end_cap_; // 0x10
};

struct CyclePromoArrowModel {
    float                                    field_0; // 0x0
    double                                   field_1; // 0x8
};

struct DailyMission {
    basic_string_char__std::char_traits_char___std::allocator_char__ _missionId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _slotId; // 0x18
    Reward                                   _reward; // 0x30
    Progression                              _progressParameters; // 0x50
    vector_std::string__std::allocator_std::string__ _opponentIds; // 0x60
    int32_t                                  _difficulty; // 0x78
    uint32_t                                 _seasonPoints; // 0x7C
    bool                                     _canBeReplaced; // 0x80
    bool                                     _isScoredByServer; // 0x81
    uint32_t                                 _expiryTimeStamp; // 0x84
};

struct __compressed_pair_pool::dailyMissions::DailyMission____std::allocator_pool::dailyMissions::DailyMission__ {
    DailyMission*                            __value_; // 0x0
};

struct vector_pool::dailyMissions::DailyMission__std::allocator_pool::dailyMissions::DailyMission__ {
    DailyMission*                            __begin_; // 0x0
    DailyMission*                            __end_; // 0x8
    __compressed_pair_pool::dailyMissions::DailyMission____std::allocator_pool::dailyMissions::DailyMission__ __end_cap_; // 0x10
};

struct Reward {
    int32_t                                  prizeType; // 0x0
    int32_t                                  prizeAmount; // 0x4
    basic_string_char__std::char_traits_char___std::allocator_char__ productId; // 0x8
};

struct Progression {
    uint32_t                                 lastShownProgression; // 0x0
    uint32_t                                 currentProgression; // 0x4
    uint32_t                                 goal; // 0x8
};

struct __compressed_pair_unsigned_long____std::allocator_unsigned_long__ {
    uint64_t*                                __value_; // 0x0
};

struct vector_unsigned_long__std::allocator_unsigned_long__ {
    uint64_t*                                __begin_; // 0x0
    uint64_t*                                __end_; // 0x8
    __compressed_pair_unsigned_long____std::allocator_unsigned_long__ __end_cap_; // 0x10
};

struct DropdownPriority {
    int32_t                                  field_0; // 0x0
};

struct DropdownNotification {
    void***                                  field_0; // 0x0
    DropdownPriority                         field_1; // 0x8
    int32_t                                  field_2; // 0xC
    bool                                     field_3; // 0x10
    shared_ptr_mc::Task_                     field_4; // 0x18
    id                                       field_5; // 0x28
    basic_string_char__std::char_traits_char___std::allocator_char__ field_6; // 0x30
};

struct shared_ptr_EmojisCollectionViewWrapper_ {
    EmojisCollectionViewWrapper*             __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__std::string___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::string___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::string___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__std::string___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::string___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::string___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__std::string___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::string___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__std::string___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::string___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::string___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__std::string__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__std::string___ {
    __hash_table_std::__hash_value_type_std::string__std::string___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::string___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::string___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__std::string___ __table_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__std::map_std::string__EnvironmentEntry____void_____ {
    __tree_end_node_std::__tree_node_base_void______ field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__std::map_std::string__EnvironmentEntry____std::less_std::string___ {
    uint64_t                                 field_0; // 0x0
};

struct __tree_std::__value_type_std::string__std::map_std::string__EnvironmentEntry____std::__map_value_compare_std::string__std::__value_type_std::string__std::map_std::string__EnvironmentEntry____std::less_std::string____std::allocator_std::__value_type_std::string__std::map_std::string__EnvironmentEntry____ {
    __tree_end_node_std::__tree_node_base_void______* field_0; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__std::map_std::string__EnvironmentEntry____void_____ field_1; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__std::map_std::string__EnvironmentEntry____std::less_std::string___ field_2; // 0x10
};

struct map_std::string__std::map_std::string__EnvironmentEntry___std::less_std::string___std::allocator_std::pair_const_std::string__std::map_std::string__EnvironmentEntry____ {
    __tree_std::__value_type_std::string__std::map_std::string__EnvironmentEntry____std::__map_value_compare_std::string__std::__value_type_std::string__std::map_std::string__EnvironmentEntry____std::less_std::string____std::allocator_std::__value_type_std::string__std::map_std::string__EnvironmentEntry____ field_0; // 0x0
};

struct EnvironmentsConfig {
    basic_string_char__std::char_traits_char___std::allocator_char__ field_0; // 0x0
    map_std::string__std::map_std::string__EnvironmentEntry___std::less_std::string___std::allocator_std::pair_const_std::string__std::map_std::string__EnvironmentEntry____ field_1; // 0x18
};

struct EnvironmentManager {
    EnvironmentsConfig                       field_0; // 0x0
    bool                                     field_1; // 0x30
};

struct CueSeenState {
    int32_t                                  _seenState; // 0x0
    int32_t                                  _queuedState; // 0x4
    bool                                     _isDataDirty; // 0x8
};

struct CueInfo {
    int32_t                                  _productId; // 0x0
    int32_t                                  _maxNumberOfCharges; // 0x4
    int32_t                                  _numberOfChargesLeft; // 0x8
    int32_t                                  _currentLevel; // 0xC
    int32_t                                  _rechargeCost; // 0x10
    bool                                     _isAutoCharging; // 0x14
};

struct CueParametersData {
    CueStats                                 cueStats; // 0x0
    CueSeenState                             seenState; // 0x10
    CueInfo                                  cueInfo; // 0x1C
    int32_t                                  cueSetBitmask; // 0x34
    int32_t                                  lastLevelUnseenUpgrade; // 0x38
    bool                                     buyable; // 0x3C
    bool                                     isFromPromotion; // 0x3D
};

struct CueParameters {
    CueParametersData                        _cueData; // 0x0
};

struct AnimationParams {
    double                                   _totalTime; // 0x0
    double                                   _currentTime; // 0x8
    double                                   _initialValue; // 0x10
    double                                   _finalValue; // 0x18
};

struct __compressed_pair_long____std::default_delete_long__ {
    int64_t*                                 __value_; // 0x0
};

struct unique_ptr_long__std::default_delete_long__ {
    __compressed_pair_long____std::default_delete_long__ __ptr_; // 0x0
};

struct Optional_long_ {
    unique_ptr_long__std::default_delete_long__ _t; // 0x0
};

struct LoadingUiDisplayStrategy {
    int32_t                                  _value; // 0x0
};

struct __compressed_pair_unsigned_long____std::default_delete_unsigned_long__ {
    uint64_t*                                __value_; // 0x0
};

struct unique_ptr_unsigned_long__std::default_delete_unsigned_long__ {
    __compressed_pair_unsigned_long____std::default_delete_unsigned_long__ __ptr_; // 0x0
};

struct Optional_unsigned_long_ {
    unique_ptr_unsigned_long__std::default_delete_unsigned_long__ _t; // 0x0
};

struct __hash_node_base_std::__hash_node_std::string__void______ {
    __hash_node_base_std::__hash_node_std::string__void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::string__void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::string__void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::string__void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::string__void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::string__void___________ {
    __hash_node_base_std::__hash_node_std::string__void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::string__void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::string__void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::string__void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::string__void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::string__void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::string__void________std::allocator_std::__hash_node_std::string__void_____ {
    __hash_node_base_std::__hash_node_std::string__void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::hash_std::string__ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::equal_to_std::string__ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::string__std::hash_std::string___std::equal_to_std::string___std::allocator_std::string__ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::string__void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::string__void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::string__void________std::allocator_std::__hash_node_std::string__void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::hash_std::string__ __p2_; // 0x18
    __compressed_pair_float__std::equal_to_std::string__ __p3_; // 0x20
};

struct unordered_set_std::string__std::hash_std::string___std::equal_to_std::string___std::allocator_std::string__ {
    __hash_table_std::string__std::hash_std::string___std::equal_to_std::string___std::allocator_std::string__ __table_; // 0x0
};

struct unordered_map_std::string__mc::Value__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__mc::Value___ {
    __hash_table_std::__hash_value_type_std::string__mc::Value___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::Value___ __table_; // 0x0
};

struct __compressed_pair_mc::Value____std::allocator_mc::Value__ {
    Value*                                   __value_; // 0x0
};

struct Vector {
    Value*                                   __begin_; // 0x0
    Value*                                   __end_; // 0x8
    __compressed_pair_mc::Value____std::allocator_mc::Value__ __end_cap_; // 0x10
};

struct weak_ptr_ObjCWrapper_ {
    ObjCWrapper*                             __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__long___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__long___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__long___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__long___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__long__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__long___ {
    __hash_table_std::__hash_value_type_std::string__long___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__long___ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__int___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__int___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__int___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__int___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__int___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__int___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__int___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__int___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__int___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__int___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__int___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__int__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__int___ {
    __hash_table_std::__hash_value_type_std::string__int___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__int___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__int___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__int___ __table_; // 0x0
};

struct __compressed_pair_std::vector_std::pair_std::string__std::string______std::allocator_std::vector_std::pair_std::string__std::string____ {
    vector_std::pair_std::string__std::string___std::allocator_std::pair_std::string__std::string___* __value_; // 0x0
};

struct vector_std::vector_std::pair_std::string__std::string____std::allocator_std::vector_std::pair_std::string__std::string____ {
    vector_std::pair_std::string__std::string___std::allocator_std::pair_std::string__std::string___* __begin_; // 0x0
    vector_std::pair_std::string__std::string___std::allocator_std::pair_std::string__std::string___* __end_; // 0x8
    __compressed_pair_std::vector_std::pair_std::string__std::string______std::allocator_std::vector_std::pair_std::string__std::string____ __end_cap_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_char___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_char___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__unsigned_char___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_char___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_char___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__unsigned_char___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__unsigned_char___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_char___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_char___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__unsigned_char__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__unsigned_char___ {
    __hash_table_std::__hash_value_type_std::string__unsigned_char___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_char___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_char___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__unsigned_char___ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__mc::Value::Vector___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::Value::Vector___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__mc::Value::Vector___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__mc::Value::Vector__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__mc::Value::Vector___ {
    __hash_table_std::__hash_value_type_std::string__mc::Value::Vector___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::Value::Vector___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::Value::Vector___ __table_; // 0x0
};

struct FormSequenceNotifier {
    unordered_map_std::string__pool::events::EventWrapper__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__pool::events::EventWrapper___ _sequenceCompletedEventWrappers; // 0x0
    unordered_map_std::string__pool::events::EventWrapper__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__pool::events::EventWrapper___ _sequenceStepCompletedEventWrappers; // 0x28
    function_void____                        _allSequencesCompletedCallback; // 0x50
    function_void__const_std::string____     _sequenceCompletedCallback; // 0x78
    function_void__const_std::string____unsigned_int__ _sequenceStepCompletedCallback; // 0xA0
    uint16_t                                 _numberOfOngoingSequences; // 0xC8
};

struct __compressed_pair_FormSequenceNotifier____std::default_delete_FormSequenceNotifier__ {
    FormSequenceNotifier*                    __value_; // 0x0
};

struct unique_ptr_FormSequenceNotifier__std::default_delete_FormSequenceNotifier__ {
    __compressed_pair_FormSequenceNotifier____std::default_delete_FormSequenceNotifier__ __ptr_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__pool::events::EventWrapper___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__pool::events::EventWrapper___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__pool::events::EventWrapper___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__pool::events::EventWrapper__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__pool::events::EventWrapper___ {
    __hash_table_std::__hash_value_type_std::string__pool::events::EventWrapper___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__pool::events::EventWrapper___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__pool::events::EventWrapper___ __table_; // 0x0
};

struct __compressed_pair_friend_of_friend_reply____std::allocator_friend_of_friend_reply__ {
    friend_of_friend_reply*                  __value_; // 0x0
};

struct vector_friend_of_friend_reply__std::allocator_friend_of_friend_reply__ {
    friend_of_friend_reply*                  __begin_; // 0x0
    friend_of_friend_reply*                  __end_; // 0x8
    __compressed_pair_friend_of_friend_reply____std::allocator_friend_of_friend_reply__ __end_cap_; // 0x10
};

struct __compressed_pair_CGPoint____std::allocator_CGPoint__ {
    CGPoint*                                 __value_; // 0x0
};

struct vector_CGPoint__std::allocator_CGPoint__ {
    CGPoint*                                 __begin_; // 0x0
    CGPoint*                                 __end_; // 0x8
    __compressed_pair_CGPoint____std::allocator_CGPoint__ __end_cap_; // 0x10
};

struct __compressed_pair_unsigned_int____std::allocator_unsigned_int__ {
    uint32_t*                                __value_; // 0x0
};

struct vector_unsigned_int__std::allocator_unsigned_int__ {
    uint32_t*                                __begin_; // 0x0
    uint32_t*                                __end_; // 0x8
    __compressed_pair_unsigned_int____std::allocator_unsigned_int__ __end_cap_; // 0x10
};

struct GameManagerCacher {
    id                                       field_0; // 0x0
};

struct CueStatsWithBonus {
    uint32_t                                 _power; // 0x0
    uint32_t                                 _spin; // 0x4
    uint32_t                                 _aim; // 0x8
    uint32_t                                 _time; // 0xC
};

struct OpponentSelectedCueData {
    int32_t                                  cueId; // 0x0
    int32_t                                  cueLevel; // 0x4
    CueStatsWithBonus                        cueStats; // 0x8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::hash_unsigned_int___std::equal_to_unsigned_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::equal_to_unsigned_int___std::hash_unsigned_int___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::__unordered_map_hasher_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::hash_unsigned_int___std::equal_to_unsigned_int____std::__unordered_map_equal_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::equal_to_unsigned_int___std::hash_unsigned_int____std::allocator_std::__hash_value_type_unsigned_int__BallRewindDataDTO___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_int__BallRewindDataDTO___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::hash_unsigned_int___std::equal_to_unsigned_int___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::equal_to_unsigned_int___std::hash_unsigned_int___ __p3_; // 0x20
};

struct unordered_map_unsigned_int__BallRewindDataDTO__std::hash_unsigned_int___std::equal_to_unsigned_int___std::allocator_std::pair_const_unsigned_int__BallRewindDataDTO___ {
    __hash_table_std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::__unordered_map_hasher_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::hash_unsigned_int___std::equal_to_unsigned_int____std::__unordered_map_equal_unsigned_int__std::__hash_value_type_unsigned_int__BallRewindDataDTO___std::equal_to_unsigned_int___std::hash_unsigned_int____std::allocator_std::__hash_value_type_unsigned_int__BallRewindDataDTO___ __table_; // 0x0
};

union anon_e228d1 {
    uint8_t                                  __null_state_; // 0x0
    uint32_t                                 __val_; // 0x0
};

struct optional_unsigned_int_ {
    anon_e228d1                              field_0; // 0x0
    bool                                     __engaged_; // 0x4
};

union IdUnion {
    int32_t                                  product_id_; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__* trophies_id_; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__* string_id_; // 0x0
};

struct user_info_update {
    void***                                  _vptr_MessageLite; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _unknown_fields_; // 0x8
    uint32_t[1]                              _has_bits_; // 0x20
    int32_t                                  _cached_size_; // 0x24
    int32_t                                  update_type_; // 0x28
    int32_t                                  total_delta_; // 0x2C
    uint64_t                                 final_; // 0x30
    int32_t                                  context_; // 0x38
    int32_t                                  vip_delta_; // 0x3C
    IdUnion                                  id_; // 0x40
    uint32_t[1]                              _oneof_case_; // 0x48
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__bool___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__bool___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__bool___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__bool___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__bool___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__bool___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__bool___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__bool___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__bool___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__bool___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__bool___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__bool__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__bool___ {
    __hash_table_std::__hash_value_type_std::string__bool___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__bool___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__bool___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__bool___ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::vector_int____std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::vector_int____std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__std::vector_int____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::vector_int____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::vector_int____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__std::vector_int____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__std::vector_int____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::vector_int____std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::vector_int____std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__std::vector_int___std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__std::vector_int____ {
    __hash_table_std::__hash_value_type_std::string__std::vector_int____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__std::vector_int____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__std::vector_int____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__std::vector_int____ __table_; // 0x0
};

struct __value_func_int____ {
    type                                     __buf_; // 0x0
    __base_int____*                          __f_; // 0x20
};

struct function_int____ {
    __value_func_int____                     __f_; // 0x0
};

struct __value_func_bool____ {
    type                                     __buf_; // 0x0
    __base_bool____*                         __f_; // 0x20
};

struct function_bool____ {
    __value_func_bool____                    __f_; // 0x0
};

struct __value_func_void__CCSprite____ {
    type                                     __buf_; // 0x0
    __base_void__CCSprite____*               __f_; // 0x20
};

struct function_void__CCSprite____ {
    __value_func_void__CCSprite____          __f_; // 0x0
};

struct IGiftNotificationView {
    void***                                  field_0; // 0x0
    id                                       field_1; // 0x8
};

struct __compressed_pair_pool::suggestedGifts::SuggestedGiftsManager____std::default_delete_pool::suggestedGifts::SuggestedGiftsManager__ {
    SuggestedGiftsManager*                   __value_; // 0x0
};

struct unique_ptr_pool::suggestedGifts::SuggestedGiftsManager__std::default_delete_pool::suggestedGifts::SuggestedGiftsManager__ {
    __compressed_pair_pool::suggestedGifts::SuggestedGiftsManager____std::default_delete_pool::suggestedGifts::SuggestedGiftsManager__ __ptr_; // 0x0
};

struct anon_526392 {
    int32_t[10]                              __private; // 0x0
};

struct mutex {
    anon_526392                              __m_; // 0x0
};

struct TargetStyleConfig {
    basic_string_char__std::char_traits_char___std::allocator_char__ field_0; // 0x0
    bool                                     field_1; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ field_2; // 0x20
    int32_t                                  field_3; // 0x38
    basic_string_char__std::char_traits_char___std::allocator_char__ field_4; // 0x40
    bool                                     field_5; // 0x58
    basic_string_char__std::char_traits_char___std::allocator_char__ field_6; // 0x60
    bool                                     field_7; // 0x78
};

struct array_float__4UL_ {
    float[4]                                 __elems_; // 0x0
};

struct array_GoldenShotHeaderPrizeNode____4UL_ {
    GoldenShotHeaderPrizeNode*[4]            __elems_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::hash_unsigned_long___std::equal_to_unsigned_long___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::equal_to_unsigned_long___std::hash_unsigned_long___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_unsigned_long__CGPoint___std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::hash_unsigned_long___std::equal_to_unsigned_long____std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::equal_to_unsigned_long___std::hash_unsigned_long____std::allocator_std::__hash_value_type_unsigned_long__CGPoint___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_long__CGPoint___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::hash_unsigned_long___std::equal_to_unsigned_long___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::equal_to_unsigned_long___std::hash_unsigned_long___ __p3_; // 0x20
};

struct unordered_map_unsigned_long__CGPoint__std::hash_unsigned_long___std::equal_to_unsigned_long___std::allocator_std::pair_const_unsigned_long__CGPoint___ {
    __hash_table_std::__hash_value_type_unsigned_long__CGPoint___std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::hash_unsigned_long___std::equal_to_unsigned_long____std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__CGPoint___std::equal_to_unsigned_long___std::hash_unsigned_long____std::allocator_std::__hash_value_type_unsigned_long__CGPoint___ __table_; // 0x0
};

struct IInviteNotificationView {
    void***                                  field_0; // 0x0
    id                                       field_1; // 0x8
};

struct IKeyboardAnimationListener {
    void***                                  field_0; // 0x0
};

struct __value_func_NSString___unsigned_long__ {
    type                                     __buf_; // 0x0
    __base_NSString___unsigned_long__*       __f_; // 0x20
};

struct function_NSString___unsigned_long__ {
    __value_func_NSString___unsigned_long__  __f_; // 0x0
};

struct ValueAnimatorConfig {
    double                                   duration; // 0x0
    double                                   updateInterval; // 0x8
    uint64_t                                 startAmount; // 0x10
    uint64_t                                 finalAmount; // 0x18
    function_NSString___unsigned_long__      formatter; // 0x20
};

struct Bundle {
    basic_string_char__std::char_traits_char___std::allocator_char__ field_0; // 0x0
};

struct __compressed_pair_pool::bundles::Bundle____std::default_delete_pool::bundles::Bundle__ {
    Bundle*                                  __value_; // 0x0
};

struct unique_ptr_pool::bundles::Bundle__std::default_delete_pool::bundles::Bundle__ {
    __compressed_pair_pool::bundles::Bundle____std::default_delete_pool::bundles::Bundle__ __ptr_; // 0x0
};

struct Optional_pool::bundles::Bundle_ {
    unique_ptr_pool::bundles::Bundle__std::default_delete_pool::bundles::Bundle__ _t; // 0x0
};

struct LeaderboardEntryData {
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ displayName; // 0x18
    uint32_t                                 rank; // 0x30
    uint64_t                                 score; // 0x38
    uint32_t                                 cueCollectionRank; // 0x40
    Optional_pool::bundles::Bundle_          bundle; // 0x48
    uint32_t                                 level; // 0x50
    basic_string_char__std::char_traits_char___std::allocator_char__ facebookId; // 0x58
    basic_string_char__std::char_traits_char___std::allocator_char__ country; // 0x70
    uint32_t                                 leagueId; // 0x88
    basic_string_char__std::char_traits_char___std::allocator_char__ clubName; // 0x90
    bool                                     isRankCutOff; // 0xA8
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_pool::leaderboards::LeaderboardType__std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____std::less_pool::leaderboards::LeaderboardType___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____std::__map_value_compare_pool::leaderboards::LeaderboardType__std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____std::less_pool::leaderboards::LeaderboardType____std::allocator_std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_pool::leaderboards::LeaderboardType__std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____std::less_pool::leaderboards::LeaderboardType___ __pair3_; // 0x10
};

struct map_pool::leaderboards::LeaderboardType__CCSpriteFrame____std::less_pool::leaderboards::LeaderboardType___std::allocator_std::pair_const_pool::leaderboards::LeaderboardType__CCSpriteFrame_____ {
    __tree_std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____std::__map_value_compare_pool::leaderboards::LeaderboardType__std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____std::less_pool::leaderboards::LeaderboardType____std::allocator_std::__value_type_pool::leaderboards::LeaderboardType__CCSpriteFrame_____ __tree_; // 0x0
};

struct __compressed_pair_CCSprite_____std::allocator_CCSprite____ {
    id*                                      __value_; // 0x0
};

struct vector_CCSprite____std::allocator_CCSprite____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_CCSprite_____std::allocator_CCSprite____ __end_cap_; // 0x10
};

struct __compressed_pair_pool::bundles::BundleProduct_____std::allocator_pool::bundles::BundleProduct____ {
    BundleProduct**                          __value_; // 0x0
};

struct vector_pool::bundles::BundleProduct____std::allocator_pool::bundles::BundleProduct____ {
    BundleProduct**                          __begin_; // 0x0
    BundleProduct**                          __end_; // 0x8
    __compressed_pair_pool::bundles::BundleProduct_____std::allocator_pool::bundles::BundleProduct____ __end_cap_; // 0x10
};

struct leaderboard_entry {
    void***                                  _vptr_MessageLite; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _unknown_fields_; // 0x8
    uint32_t[1]                              _has_bits_; // 0x20
    int32_t                                  _cached_size_; // 0x24
    basic_string_char__std::char_traits_char___std::allocator_char__* user_id_; // 0x28
    basic_string_char__std::char_traits_char___std::allocator_char__* display_name_; // 0x30
    uint32_t                                 level_; // 0x38
    uint32_t                                 rank_; // 0x3C
    uint64_t                                 winnings_; // 0x40
    basic_string_char__std::char_traits_char___std::allocator_char__* facebook_id_; // 0x48
    basic_string_char__std::char_traits_char___std::allocator_char__* country_code_; // 0x50
    basic_string_char__std::char_traits_char___std::allocator_char__* club_name_; // 0x58
    uint32_t                                 league_; // 0x60
    uint32_t                                 cue_collection_rank_; // 0x64
    bool                                     is_rank_cut_off_; // 0x68
};

struct TleLeaderboardEntryData {
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ displayName; // 0x18
    uint32_t                                 rank; // 0x30
    uint64_t                                 score; // 0x38
    uint32_t                                 cueCollectionRank; // 0x40
    Optional_pool::bundles::Bundle_          bundle; // 0x48
};

struct mcColor {
    float                                    r; // 0x0
    float                                    g; // 0x4
    float                                    b; // 0x8
    float                                    a; // 0xC
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__unsigned_int___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__unsigned_int___productSortComparator__ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_std::string__unsigned_int___std::__map_value_compare_std::string__std::__value_type_std::string__unsigned_int___productSortComparator___std::allocator_std::__value_type_std::string__unsigned_int___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__unsigned_int___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__unsigned_int___productSortComparator__ __pair3_; // 0x10
};

struct map_std::string__unsigned_int__productSortComparator__std::allocator_std::pair_const_std::string__unsigned_int___ {
    __tree_std::__value_type_std::string__unsigned_int___std::__map_value_compare_std::string__std::__value_type_std::string__unsigned_int___productSortComparator___std::allocator_std::__value_type_std::string__unsigned_int___ __tree_; // 0x0
};

struct LeagueInfoUpdateData {
    uint32_t                                 context; // 0x0
    map_std::string__unsigned_int__productSortComparator__std::allocator_std::pair_const_std::string__unsigned_int___ productDeltasMap; // 0x8
};

struct LeagueTransitionData {
    uint32_t                                 transitionType; // 0x0
    Optional_unsigned_int_                   leagueId; // 0x8
    Optional_unsigned_int_                   previousLeagueId; // 0x10
    LeagueInfoUpdateData                     leagueInfoUpdateData; // 0x18
};

struct __compressed_pair_pool::leaderboards::medals::LeaderboardMedalUIData____std::allocator_pool::leaderboards::medals::LeaderboardMedalUIData__ {
    LeaderboardMedalUIData*                  __value_; // 0x0
};

struct vector_pool::leaderboards::medals::LeaderboardMedalUIData__std::allocator_pool::leaderboards::medals::LeaderboardMedalUIData__ {
    LeaderboardMedalUIData*                  __begin_; // 0x0
    LeaderboardMedalUIData*                  __end_; // 0x8
    __compressed_pair_pool::leaderboards::medals::LeaderboardMedalUIData____std::allocator_pool::leaderboards::medals::LeaderboardMedalUIData__ __end_cap_; // 0x10
};

struct LeaguesPreviousResultsController {
    uint64_t                                 field_0; // 0x0
    id                                       field_1; // 0x8
    id                                       field_2; // 0x10
    StringMap                                field_3; // 0x18
};

struct ILevelRequirementView {
    void***                                  field_0; // 0x0
};

struct __compressed_pair_mc::Any::AnyKeeperBase____std::default_delete_mc::Any::AnyKeeperBase__ {
    AnyKeeperBase*                           __value_; // 0x0
};

struct unique_ptr_mc::Any::AnyKeeperBase__std::default_delete_mc::Any::AnyKeeperBase__ {
    __compressed_pair_mc::Any::AnyKeeperBase____std::default_delete_mc::Any::AnyKeeperBase__ __ptr_; // 0x0
};

struct Any {
    unique_ptr_mc::Any::AnyKeeperBase__std::default_delete_mc::Any::AnyKeeperBase__ _keeper; // 0x0
};

struct __compressed_pair_pool::axon::PendingEvent_____std::allocator_pool::axon::PendingEvent____ {
    PendingEvent**                           __value_; // 0x0
};

struct __split_buffer_pool::axon::PendingEvent____std::allocator_pool::axon::PendingEvent____ {
    PendingEvent**                           __first_; // 0x0
    PendingEvent**                           __begin_; // 0x8
    PendingEvent**                           __end_; // 0x10
    __compressed_pair_pool::axon::PendingEvent_____std::allocator_pool::axon::PendingEvent____ __end_cap_; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_pool::axon::PendingEvent__ {
    uint64_t                                 __value_; // 0x0
};

struct deque_pool::axon::PendingEvent__std::allocator_pool::axon::PendingEvent__ {
    __split_buffer_pool::axon::PendingEvent____std::allocator_pool::axon::PendingEvent____ __map_; // 0x0
    uint64_t                                 __start_; // 0x20
    __compressed_pair_unsigned_long__std::allocator_pool::axon::PendingEvent__ __size_; // 0x28
};

struct __compressed_pair_mc::Value_____std::allocator_mc::Value____ {
    Value**                                  field_0; // 0x0
};

struct __split_buffer_mc::Value____std::allocator_mc::Value____ {
    Value**                                  field_0; // 0x0
    Value**                                  field_1; // 0x8
    Value**                                  field_2; // 0x10
    __compressed_pair_mc::Value_____std::allocator_mc::Value____ field_3; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_mc::Value__ {
    uint64_t                                 field_0; // 0x0
};

struct deque_mc::Value__std::allocator_mc::Value__ {
    __split_buffer_mc::Value____std::allocator_mc::Value____ field_0; // 0x0
    uint64_t                                 field_1; // 0x20
    __compressed_pair_unsigned_long__std::allocator_mc::Value__ field_2; // 0x28
};

struct __hash_node_base_std::__hash_node_const_std::string____void______ {
    __hash_node_base_std::__hash_node_const_std::string____void______* field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void__________ {
    uint64_t                                 field_0; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void__________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_const_std::string____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void___________ {
    __hash_node_base_std::__hash_node_const_std::string____void______** field_0; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void__________ field_1; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_const_std::string____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_const_std::string____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void___________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_const_std::string____void________std::allocator_std::__hash_node_const_std::string____void_____ {
    __hash_node_base_std::__hash_node_const_std::string____void______ field_0; // 0x0
};

struct __compressed_pair_unsigned_long__mc::ConfigurationData::StringPtrHash_ {
    uint64_t                                 field_0; // 0x0
};

struct __compressed_pair_float__mc::ConfigurationData::StringPtrEqual_ {
    float                                    field_0; // 0x0
};

struct __hash_table_const_std::string____mc::ConfigurationData::StringPtrHash__mc::ConfigurationData::StringPtrEqual__std::allocator_const_std::string____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_const_std::string____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_const_std::string____void___________ field_0; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_const_std::string____void________std::allocator_std::__hash_node_const_std::string____void_____ field_1; // 0x10
    __compressed_pair_unsigned_long__mc::ConfigurationData::StringPtrHash_ field_2; // 0x18
    __compressed_pair_float__mc::ConfigurationData::StringPtrEqual_ field_3; // 0x20
};

struct unordered_set_const_std::string____mc::ConfigurationData::StringPtrHash__mc::ConfigurationData::StringPtrEqual__std::allocator_const_std::string____ {
    __hash_table_const_std::string____mc::ConfigurationData::StringPtrHash__mc::ConfigurationData::StringPtrEqual__std::allocator_const_std::string____ field_0; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void______* field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void__________ {
    uint64_t                                 field_0; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void__________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void______** field_0; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void__________ field_1; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void___________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void______ field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__ {
    uint64_t                                 field_0; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc__ {
    float                                    field_0; // 0x0
};

struct __hash_table_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc___std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc___std::allocator_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void___________ field_0; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____void_____ field_1; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__ field_2; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc__ field_3; // 0x20
};

struct unordered_map_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__std::allocator_std::pair_const_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____ {
    __hash_table_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc___std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc___std::allocator_std::__hash_value_type_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____ field_0; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void______* field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void__________ {
    uint64_t                                 field_0; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void__________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void______** field_0; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void__________ field_1; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void___________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void______ field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___ {
    uint64_t                                 field_0; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::equal_to_unsigned_long_long___std::hash_unsigned_long_long___ {
    float                                    field_0; // 0x0
};

struct __hash_table_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::__unordered_map_hasher_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::hash_unsigned_long_long___std::equal_to_unsigned_long_long____std::__unordered_map_equal_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::equal_to_unsigned_long_long___std::hash_unsigned_long_long____std::allocator_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void___________ field_0; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______void_____ field_1; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___ field_2; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::equal_to_unsigned_long_long___std::hash_unsigned_long_long___ field_3; // 0x20
};

struct unordered_map_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value_____std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___std::allocator_std::pair_const_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______ {
    __hash_table_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::__unordered_map_hasher_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::hash_unsigned_long_long___std::equal_to_unsigned_long_long____std::__unordered_map_equal_unsigned_long_long__std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______std::equal_to_unsigned_long_long___std::hash_unsigned_long_long____std::allocator_std::__hash_value_type_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______ field_0; // 0x0
};

struct __value_func_mc::Value::StringMap____ {
    type                                     field_0; // 0x0
    __base_mc::Value::StringMap____*         field_1; // 0x20
};

struct function_mc::Value::StringMap____ {
    __value_func_mc::Value::StringMap____    field_0; // 0x0
};

struct __value_func_std::unordered_map_std::string__std::string_____ {
    type                                     field_0; // 0x0
    __base_std::unordered_map_std::string__std::string_____* field_1; // 0x20
};

struct function_std::unordered_map_std::string__std::string_____ {
    __value_func_std::unordered_map_std::string__std::string_____ field_0; // 0x0
};

struct __compressed_pair_std::function_void________std::allocator_std::function_void______ {
    function_void____*                       field_0; // 0x0
};

struct vector_std::function_void______std::allocator_std::function_void______ {
    function_void____*                       field_0; // 0x0
    function_void____*                       field_1; // 0x8
    __compressed_pair_std::function_void________std::allocator_std::function_void______ field_2; // 0x10
};

struct function_void__const_std::string____ {
    __value_func_void__const_std::string____ __f_; // 0x0
};

struct __compressed_pair_std::function_void__const_std::string________std::allocator_std::function_void__const_std::string______ {
    function_void__const_std::string____*    field_0; // 0x0
};

struct vector_std::function_void__const_std::string______std::allocator_std::function_void__const_std::string______ {
    function_void__const_std::string____*    field_0; // 0x0
    function_void__const_std::string____*    field_1; // 0x8
    __compressed_pair_std::function_void__const_std::string________std::allocator_std::function_void__const_std::string______ field_2; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void______* field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void__________ {
    uint64_t                                 field_0; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void__________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void______** field_0; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void__________ field_1; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void___________ field_0; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void______ field_0; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 field_0; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::equal_to_std::string___std::hash_std::string___ {
    float                                    field_0; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void___________ field_0; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___void_____ field_1; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::hash_std::string___std::equal_to_std::string___ field_2; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::equal_to_std::string___std::hash_std::string___ field_3; // 0x20
};

struct unordered_map_std::string__mc::ConfigurationData::CustomTranslationEntry__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__mc::ConfigurationData::CustomTranslationEntry___ {
    __hash_table_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__mc::ConfigurationData::CustomTranslationEntry___ field_0; // 0x0
};

struct anon_d42c0e {
    int32_t[10]                              field_0; // 0x0
};

struct anon_52359f {
    int32_t[12]                              field_0; // 0x0
};

struct condition_variable {
    anon_52359f                              field_0; // 0x0
};

struct ConfigurationData {
    basic_string_char__std::char_traits_char___std::allocator_char__ field_0; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ field_1; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ field_2; // 0x30
    basic_string_char__std::char_traits_char___std::allocator_char__ field_3; // 0x48
    basic_string_char__std::char_traits_char___std::allocator_char__ field_4; // 0x60
    basic_string_char__std::char_traits_char___std::allocator_char__ field_5; // 0x78
    unordered_map_std::string__std::string__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__std::string___ field_6; // 0x90
    StringMap                                field_7; // 0xB8
    StringMap                                field_8; // 0xE0
    StringMap                                field_9; // 0x108
    deque_mc::Value__std::allocator_mc::Value__ field_10; // 0x130
    unordered_set_const_std::string____mc::ConfigurationData::StringPtrHash__mc::ConfigurationData::StringPtrEqual__std::allocator_const_std::string____ field_11; // 0x160
    unordered_map_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__std::allocator_std::pair_const_std::reference_wrapper_const_std::string___std::vector_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc_____ field_12; // 0x188
    unordered_map_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value_____std::hash_unsigned_long_long___std::equal_to_unsigned_long_long___std::allocator_std::pair_const_unsigned_long_long__std::vector_std::unordered_map_unsigned_long_long__std::reference_wrapper_const_mc::Value______ field_13; // 0x1B0
    function_mc::Value::StringMap____        field_14; // 0x1D8
    function_mc::Value::StringMap____        field_15; // 0x200
    function_mc::Value::StringMap____        field_16; // 0x228
    function_std::unordered_map_std::string__std::string_____ field_17; // 0x250
    function_void____                        field_18; // 0x278
    vector_std::function_void______std::allocator_std::function_void______ field_19; // 0x2A0
    vector_std::function_void______std::allocator_std::function_void______ field_20; // 0x2B8
    vector_std::function_void__const_std::string______std::allocator_std::function_void__const_std::string______ field_21; // 0x2D0
    unordered_map_std::string__mc::ConfigurationData::CustomTranslationEntry__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__mc::ConfigurationData::CustomTranslationEntry___ field_22; // 0x2E8
    mutex                                    field_23; // 0x310
    condition_variable                       field_24; // 0x338
    bool                                     field_25; // 0x368
    bool                                     field_26; // 0x369
    bool                                     field_27; // 0x36A
    bool                                     field_28; // 0x36B
    bool                                     field_29; // 0x36C
    bool                                     field_30; // 0x36D
    bool                                     field_31; // 0x36E
};

struct __compressed_pair__ccVertex2F____std::allocator__ccVertex2F__ {
    _ccVertex2F*                             __value_; // 0x0
};

struct vector__ccVertex2F__std::allocator__ccVertex2F__ {
    _ccVertex2F*                             __begin_; // 0x0
    _ccVertex2F*                             __end_; // 0x8
    __compressed_pair__ccVertex2F____std::allocator__ccVertex2F__ __end_cap_; // 0x10
};

struct __compressed_pair__mcV2F_T2F____std::allocator__mcV2F_T2F__ {
    _mcV2F_T2F*                              __value_; // 0x0
};

struct vector__mcV2F_T2F__std::allocator__mcV2F_T2F__ {
    _mcV2F_T2F*                              __begin_; // 0x0
    _mcV2F_T2F*                              __end_; // 0x8
    __compressed_pair__mcV2F_T2F____std::allocator__mcV2F_T2F__ __end_cap_; // 0x10
};

struct __compressed_pair__mcV2F_C4B____std::allocator__mcV2F_C4B__ {
    _mcV2F_C4B*                              __value_; // 0x0
};

struct vector__mcV2F_C4B__std::allocator__mcV2F_C4B__ {
    _mcV2F_C4B*                              __begin_; // 0x0
    _mcV2F_C4B*                              __end_; // 0x8
    __compressed_pair__mcV2F_C4B____std::allocator__mcV2F_C4B__ __end_cap_; // 0x10
};

struct __compressed_pair_unsigned_short____std::allocator_unsigned_short__ {
    uint16_t*                                __value_; // 0x0
};

struct vector_unsigned_short__std::allocator_unsigned_short__ {
    uint16_t*                                __begin_; // 0x0
    uint16_t*                                __end_; // 0x8
    __compressed_pair_unsigned_short____std::allocator_unsigned_short__ __end_cap_; // 0x10
};

struct __compressed_pair_mc::renderer::RenderJob____std::allocator_mc::renderer::RenderJob__ {
    RenderJob*                               __value_; // 0x0
};

struct vector_mc::renderer::RenderJob__std::allocator_mc::renderer::RenderJob__ {
    RenderJob*                               __begin_; // 0x0
    RenderJob*                               __end_; // 0x8
    __compressed_pair_mc::renderer::RenderJob____std::allocator_mc::renderer::RenderJob__ __end_cap_; // 0x10
};

struct __compressed_pair_LabelRenderJobsFill____std::allocator_LabelRenderJobsFill__ {
    LabelRenderJobsFill*                     __value_; // 0x0
};

struct vector_LabelRenderJobsFill__std::allocator_LabelRenderJobsFill__ {
    LabelRenderJobsFill*                     __begin_; // 0x0
    LabelRenderJobsFill*                     __end_; // 0x8
    __compressed_pair_LabelRenderJobsFill____std::allocator_LabelRenderJobsFill__ __end_cap_; // 0x10
};

struct __compressed_pair_mc::CTextRenderer_Harfbuzz::STexturedQuad____std::allocator_mc::CTextRenderer_Harfbuzz::STexturedQuad__ {
    STexturedQuad*                           __value_; // 0x0
};

struct vector_mc::CTextRenderer_Harfbuzz::STexturedQuad__std::allocator_mc::CTextRenderer_Harfbuzz::STexturedQuad__ {
    STexturedQuad*                           __begin_; // 0x0
    STexturedQuad*                           __end_; // 0x8
    __compressed_pair_mc::CTextRenderer_Harfbuzz::STexturedQuad____std::allocator_mc::CTextRenderer_Harfbuzz::STexturedQuad__ __end_cap_; // 0x10
};

struct __compressed_pair_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads_____std::allocator_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___ {
    vector_mc::CTextRenderer_Harfbuzz::WordQuads__std::allocator_mc::CTextRenderer_Harfbuzz::WordQuads__* __value_; // 0x0
};

struct vector_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___std::allocator_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___ {
    vector_mc::CTextRenderer_Harfbuzz::WordQuads__std::allocator_mc::CTextRenderer_Harfbuzz::WordQuads__* __begin_; // 0x0
    vector_mc::CTextRenderer_Harfbuzz::WordQuads__std::allocator_mc::CTextRenderer_Harfbuzz::WordQuads__* __end_; // 0x8
    __compressed_pair_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads_____std::allocator_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___ __end_cap_; // 0x10
};

struct __compressed_pair_mc::MeshData____std::allocator_mc::MeshData__ {
    MeshData*                                __value_; // 0x0
};

struct vector_mc::MeshData__std::allocator_mc::MeshData__ {
    MeshData*                                __begin_; // 0x0
    MeshData*                                __end_; // 0x8
    __compressed_pair_mc::MeshData____std::allocator_mc::MeshData__ __end_cap_; // 0x10
};

struct anon_205cf0 {
    uint8_t                                  x; // 0x0
    uint8_t                                  y; // 0x1
    uint8_t                                  z; // 0x2
    uint8_t                                  w; // 0x3
};

struct anon_1acd15 {
    uint8_t                                  red; // 0x0
    uint8_t                                  green; // 0x1
    uint8_t                                  blue; // 0x2
    uint8_t                                  alpha; // 0x3
};

union anon_878c9a {
    anon_205cf0                              field_0; // 0x0
    anon_1acd15                              field_1; // 0x0
    uint8_t[4]                               values; // 0x0
};

struct Point4D_unsigned_char_ {
    anon_878c9a                              field_0; // 0x0
};

struct __compressed_pair_mc::CTextRenderer_Harfbuzz::TextAttachment____std::allocator_mc::CTextRenderer_Harfbuzz::TextAttachment__ {
    TextAttachment*                          __value_; // 0x0
};

struct vector_mc::CTextRenderer_Harfbuzz::TextAttachment__std::allocator_mc::CTextRenderer_Harfbuzz::TextAttachment__ {
    TextAttachment*                          __begin_; // 0x0
    TextAttachment*                          __end_; // 0x8
    __compressed_pair_mc::CTextRenderer_Harfbuzz::TextAttachment____std::allocator_mc::CTextRenderer_Harfbuzz::TextAttachment__ __end_cap_; // 0x10
};

struct TextRenderJobData {
    uint8_t                                  HAlignment; // 0x0
    uint8_t                                  VAlignment; // 0x1
    uint8_t                                  LineBreakMode; // 0x2
    bool                                     TokensOnlyAffectAlpha; // 0x3
    bool                                     ForceSingleLine; // 0x4
    basic_string_char__std::char_traits_char___std::allocator_char__ String; // 0x8
    float                                    FontSize; // 0x20
    uint32_t                                 FontSizeRounded; // 0x24
    float                                    Scale; // 0x28
    float                                    MaxWidth; // 0x2C
    float                                    MaxHeight; // 0x30
    float                                    Width; // 0x34
    float                                    Height; // 0x38
    vector_mc::CTextRenderer_Harfbuzz::STexturedQuad__std::allocator_mc::CTextRenderer_Harfbuzz::STexturedQuad__ TexturedQuads; // 0x40
    vector_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___std::allocator_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___ ResultingLines; // 0x58
    vector_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___std::allocator_std::vector_mc::CTextRenderer_Harfbuzz::WordQuads___ ScaledLines; // 0x70
    vector_mc::MeshData__std::allocator_mc::MeshData__ Meshes; // 0x88
    Point2D_float_                           BoundingBox; // 0xA0
    Point4D_unsigned_char_                   Color; // 0xA8
    vector_mc::CTextRenderer_Harfbuzz::TextAttachment__std::allocator_mc::CTextRenderer_Harfbuzz::TextAttachment__ Attachments; // 0xB0
    uint32_t                                 AttachmentsUsed; // 0xC8
    basic_string_char__std::char_traits_char___std::allocator_char__ PrintableCharacters; // 0xD0
    uint64_t                                 PrintableCharactersCount; // 0xE8
    bool                                     Escape; // 0xF0
    bool                                     TrimTextEdges; // 0xF1
    bool                                     OptimizeQuads; // 0xF2
};

struct __compressed_pair_MCLabelTTFUniformHandles____std::allocator_MCLabelTTFUniformHandles__ {
    MCLabelTTFUniformHandles*                __value_; // 0x0
};

struct vector_MCLabelTTFUniformHandles__std::allocator_MCLabelTTFUniformHandles__ {
    MCLabelTTFUniformHandles*                __begin_; // 0x0
    MCLabelTTFUniformHandles*                __end_; // 0x8
    __compressed_pair_MCLabelTTFUniformHandles____std::allocator_MCLabelTTFUniformHandles__ __end_cap_; // 0x10
};

struct __compressed_pair_TextAttachment_____std::allocator_TextAttachment____ {
    id*                                      __value_; // 0x0
};

struct vector_TextAttachment____std::allocator_TextAttachment____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_TextAttachment_____std::allocator_TextAttachment____ __end_cap_; // 0x10
};

struct __compressed_pair_MCLayoutGridRow____std::allocator_MCLayoutGridRow__ {
    MCLayoutGridRow*                         __value_; // 0x0
};

struct vector_MCLayoutGridRow__std::allocator_MCLayoutGridRow__ {
    MCLayoutGridRow*                         __begin_; // 0x0
    MCLayoutGridRow*                         __end_; // 0x8
    __compressed_pair_MCLayoutGridRow____std::allocator_MCLayoutGridRow__ __end_cap_; // 0x10
};

struct __compressed_pair_MCLayoutGridCol____std::allocator_MCLayoutGridCol__ {
    MCLayoutGridCol*                         __value_; // 0x0
};

struct vector_MCLayoutGridCol__std::allocator_MCLayoutGridCol__ {
    MCLayoutGridCol*                         __begin_; // 0x0
    MCLayoutGridCol*                         __end_; // 0x8
    __compressed_pair_MCLayoutGridCol____std::allocator_MCLayoutGridCol__ __end_cap_; // 0x10
};

struct MCLayoutGrid {
    vector_MCLayoutGridRow__std::allocator_MCLayoutGridRow__ rows; // 0x0
    vector_MCLayoutGridCol__std::allocator_MCLayoutGridCol__ cols; // 0x18
    CGSize                                   size; // 0x30
    CGSize                                   freeSpace; // 0x40
};

struct __compressed_pair_CCNode______std::allocator_CCNode_____ {
    id**                                     __value_; // 0x0
};

struct __split_buffer_CCNode_____std::allocator_CCNode_____ {
    id**                                     __first_; // 0x0
    id**                                     __begin_; // 0x8
    id**                                     __end_; // 0x10
    __compressed_pair_CCNode______std::allocator_CCNode_____ __end_cap_; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_CCNode____ {
    uint64_t                                 __value_; // 0x0
};

struct deque_CCNode____std::allocator_CCNode____ {
    __split_buffer_CCNode_____std::allocator_CCNode_____ __map_; // 0x0
    uint64_t                                 __start_; // 0x20
    __compressed_pair_unsigned_long__std::allocator_CCNode____ __size_; // 0x28
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void________std::allocator_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____NodeScale___std::hash_CCNode_____std::equal_to_CCNode_____ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____NodeScale___std::equal_to_CCNode_____std::hash_CCNode_____ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_CCNode____NodeScale___std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____NodeScale___std::hash_CCNode_____std::equal_to_CCNode______std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____NodeScale___std::equal_to_CCNode_____std::hash_CCNode______std::allocator_std::__hash_value_type_CCNode____NodeScale___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void________std::allocator_std::__hash_node_std::__hash_value_type_CCNode____NodeScale___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____NodeScale___std::hash_CCNode_____std::equal_to_CCNode_____ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____NodeScale___std::equal_to_CCNode_____std::hash_CCNode_____ __p3_; // 0x20
};

struct unordered_map_CCNode____NodeScale__std::hash_CCNode_____std::equal_to_CCNode_____std::allocator_std::pair_CCNode__const__NodeScale___ {
    __hash_table_std::__hash_value_type_CCNode____NodeScale___std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____NodeScale___std::hash_CCNode_____std::equal_to_CCNode______std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____NodeScale___std::equal_to_CCNode_____std::hash_CCNode______std::allocator_std::__hash_value_type_CCNode____NodeScale___ __table_; // 0x0
};

struct MCLayoutPadding {
    double                                   left; // 0x0
    double                                   right; // 0x8
    double                                   top; // 0x10
    double                                   bottom; // 0x18
};

struct MCLayoutSpacing {
    double                                   x; // 0x0
    double                                   y; // 0x8
};

struct MCLayoutResizeMode {
    uint8_t                                  horizontal; // 0x0
    uint8_t                                  vertical; // 0x1
};

struct MCLayoutDistribution {
    uint8_t                                  horizontal; // 0x0
    uint8_t                                  vertical; // 0x1
};

struct MCLayoutPartialFitting {
    double                                   partialFitRows; // 0x0
    double                                   partialFitColumns; // 0x8
};

struct pair_CGPoint__CGPoint_ {
    CGPoint                                  first; // 0x0
    CGPoint                                  second; // 0x10
};

struct Padding {
    double                                   top; // 0x0
    double                                   right; // 0x8
    double                                   bottom; // 0x10
    double                                   left; // 0x18
};

struct shared_ptr_mc::downloader::AssetPackage_ {
    AssetPackage*                            __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct shared_ptr_mc::promo::client::InternalPackageObserver_ {
    InternalPackageObserver*                 __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __compressed_pair_mc::LocalizationManager____std::default_delete_mc::LocalizationManager__ {
    LocalizationManager*                     __value_; // 0x0
};

struct unique_ptr_mc::LocalizationManager__std::default_delete_mc::LocalizationManager__ {
    __compressed_pair_mc::LocalizationManager____std::default_delete_mc::LocalizationManager__ __ptr_; // 0x0
};

struct MCPromoSystemMessageHandlerProtocol {
    void***                                  field_0; // 0x0
};

struct shared_ptr_MCPromoPopupWrapper_ {
    MCPromoPopupWrapper*                     __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct RectArea {
    CGPoint                                  bottomLeft; // 0x0
    CGPoint                                  topRight; // 0x10
};

struct Stopwatch {
    bool                                     _running; // 0x0
    duration_long_long__std::ratio_1__1000000000__ _timePassed; // 0x8
    time_point_std::chrono::steady_clock__std::chrono::duration_long_long__std::ratio_1__1000000000___ _timeLastResumed; // 0x10
};

struct __compressed_pair_SnapPoint____std::allocator_SnapPoint__ {
    SnapPoint*                               __value_; // 0x0
};

struct vector_SnapPoint__std::allocator_SnapPoint__ {
    SnapPoint*                               __begin_; // 0x0
    SnapPoint*                               __end_; // 0x8
    __compressed_pair_SnapPoint____std::allocator_SnapPoint__ __end_cap_; // 0x10
};

struct ScrollBarDistance {
    float                                    horizontalBarDistance; // 0x0
    float                                    verticalBarDistance; // 0x4
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void________std::allocator_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::hash_CCNode_____std::equal_to_CCNode_____ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::equal_to_CCNode_____std::hash_CCNode_____ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_CCNode____ViewportTrackedNode___std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::hash_CCNode_____std::equal_to_CCNode______std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::equal_to_CCNode_____std::hash_CCNode______std::allocator_std::__hash_value_type_CCNode____ViewportTrackedNode___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void________std::allocator_std::__hash_node_std::__hash_value_type_CCNode____ViewportTrackedNode___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::hash_CCNode_____std::equal_to_CCNode_____ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::equal_to_CCNode_____std::hash_CCNode_____ __p3_; // 0x20
};

struct unordered_map_CCNode____ViewportTrackedNode__std::hash_CCNode_____std::equal_to_CCNode_____std::allocator_std::pair_CCNode__const__ViewportTrackedNode___ {
    __hash_table_std::__hash_value_type_CCNode____ViewportTrackedNode___std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::hash_CCNode_____std::equal_to_CCNode______std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____ViewportTrackedNode___std::equal_to_CCNode_____std::hash_CCNode______std::allocator_std::__hash_value_type_CCNode____ViewportTrackedNode___ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void________std::allocator_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____CCNode_____std::hash_CCNode_____std::equal_to_CCNode_____ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____CCNode_____std::equal_to_CCNode_____std::hash_CCNode_____ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_CCNode____CCNode_____std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____CCNode_____std::hash_CCNode_____std::equal_to_CCNode______std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____CCNode_____std::equal_to_CCNode_____std::hash_CCNode______std::allocator_std::__hash_value_type_CCNode____CCNode_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void________std::allocator_std::__hash_node_std::__hash_value_type_CCNode____CCNode_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____CCNode_____std::hash_CCNode_____std::equal_to_CCNode_____ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____CCNode_____std::equal_to_CCNode_____std::hash_CCNode_____ __p3_; // 0x20
};

struct unordered_map_CCNode____CCNode____std::hash_CCNode_____std::equal_to_CCNode_____std::allocator_std::pair_CCNode__const__CCNode_____ {
    __hash_table_std::__hash_value_type_CCNode____CCNode_____std::__unordered_map_hasher_CCNode____std::__hash_value_type_CCNode____CCNode_____std::hash_CCNode_____std::equal_to_CCNode______std::__unordered_map_equal_CCNode____std::__hash_value_type_CCNode____CCNode_____std::equal_to_CCNode_____std::hash_CCNode______std::allocator_std::__hash_value_type_CCNode____CCNode_____ __table_; // 0x0
};

struct __value_func_void__MovementType__ {
    type                                     __buf_; // 0x0
    __base_void__MovementType__*             __f_; // 0x20
};

struct function_void__MovementType__ {
    __value_func_void__MovementType__        __f_; // 0x0
};

struct shared_ptr_mc::AlertPopupImp_ {
    AlertPopupImp*                           field_0; // 0x0
    __shared_weak_count*                     field_1; // 0x8
};

struct AlertPopup {
    shared_ptr_mc::AlertPopupImp_            field_0; // 0x0
};

struct __compressed_pair_LocalizationManagerWrapper____std::default_delete_LocalizationManagerWrapper__ {
    LocalizationManagerWrapper*              __value_; // 0x0
};

struct unique_ptr_LocalizationManagerWrapper__std::default_delete_LocalizationManagerWrapper__ {
    __compressed_pair_LocalizationManagerWrapper____std::default_delete_LocalizationManagerWrapper__ __ptr_; // 0x0
};

struct __compressed_pair_TopBarGenericItem_____std::allocator_TopBarGenericItem____ {
    id*                                      __value_; // 0x0
};

struct vector_TopBarGenericItem____std::allocator_TopBarGenericItem____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_TopBarGenericItem_____std::allocator_TopBarGenericItem____ __end_cap_; // 0x10
};

struct ProgressBarWidgetBuilder {
    id<ProgressBarWidgetProtocol>            delegate; // 0x0
    int64_t                                  minimumValue; // 0x8
    int64_t                                  currentValue; // 0x10
    int64_t                                  maximumValue; // 0x18
    int64_t                                  deltaValue; // 0x20
};

struct ChampionshipMatchInfo {
    int64_t                                  deltaPoints; // 0x0
    int64_t                                  deltaRank; // 0x8
};

struct TrophyMatchInfo {
    int32_t                                  cap; // 0x0
    int32_t                                  delta; // 0x4
    int32_t                                  current; // 0x8
    basic_string_char__std::char_traits_char___std::allocator_char__ tierId; // 0x10
};

struct victory_box_slot {
    void***                                  _vptr_MessageLite; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _unknown_fields_; // 0x8
    uint32_t[1]                              _has_bits_; // 0x20
    int32_t                                  _cached_size_; // 0x24
    basic_string_char__std::char_traits_char___std::allocator_char__* product_id_; // 0x28
    uint32_t                                 index_; // 0x30
    int32_t                                  state_; // 0x34
    uint64_t                                 lock_duration_; // 0x38
    uint32_t                                 ftue_box_number_; // 0x40
};

struct ProductPrize {
    int32_t                                  prizeAmount; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ productId; // 0x8
};

struct __compressed_pair_ProductPrize____std::allocator_ProductPrize__ {
    ProductPrize*                            __value_; // 0x0
};

struct vector_ProductPrize__std::allocator_ProductPrize__ {
    ProductPrize*                            __begin_; // 0x0
    ProductPrize*                            __end_; // 0x8
    __compressed_pair_ProductPrize____std::allocator_ProductPrize__ __end_cap_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void________std::allocator_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::hash_ModifierType___std::equal_to_ModifierType___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::equal_to_ModifierType___std::hash_ModifierType___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_ModifierType__std::vector_int____std::__unordered_map_hasher_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::hash_ModifierType___std::equal_to_ModifierType____std::__unordered_map_equal_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::equal_to_ModifierType___std::hash_ModifierType____std::allocator_std::__hash_value_type_ModifierType__std::vector_int____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void________std::allocator_std::__hash_node_std::__hash_value_type_ModifierType__std::vector_int____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::hash_ModifierType___std::equal_to_ModifierType___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::equal_to_ModifierType___std::hash_ModifierType___ __p3_; // 0x20
};

struct unordered_map_ModifierType__std::vector_int___std::hash_ModifierType___std::equal_to_ModifierType___std::allocator_std::pair_const_ModifierType__std::vector_int____ {
    __hash_table_std::__hash_value_type_ModifierType__std::vector_int____std::__unordered_map_hasher_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::hash_ModifierType___std::equal_to_ModifierType____std::__unordered_map_equal_ModifierType__std::__hash_value_type_ModifierType__std::vector_int____std::equal_to_ModifierType___std::hash_ModifierType____std::allocator_std::__hash_value_type_ModifierType__std::vector_int____ __table_; // 0x0
};

struct __compressed_pair_std::reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc______std::allocator_std::reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc____ {
    reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__* __value_; // 0x0
};

struct vector_std::reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc____std::allocator_std::reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc____ {
    reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__* __begin_; // 0x0
    reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__* __end_; // 0x8
    __compressed_pair_std::reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc______std::allocator_std::reference_wrapper_const_std::unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc____ __end_cap_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void________std::allocator_std::__hash_node_std::__hash_value_type_int__unsigned_int___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_int__std::__hash_value_type_int__unsigned_int___std::hash_int___std::equal_to_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_int__std::__hash_value_type_int__unsigned_int___std::equal_to_int___std::hash_int___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_int__unsigned_int___std::__unordered_map_hasher_int__std::__hash_value_type_int__unsigned_int___std::hash_int___std::equal_to_int____std::__unordered_map_equal_int__std::__hash_value_type_int__unsigned_int___std::equal_to_int___std::hash_int____std::allocator_std::__hash_value_type_int__unsigned_int___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__unsigned_int___void________std::allocator_std::__hash_node_std::__hash_value_type_int__unsigned_int___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_int__std::__hash_value_type_int__unsigned_int___std::hash_int___std::equal_to_int___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_int__std::__hash_value_type_int__unsigned_int___std::equal_to_int___std::hash_int___ __p3_; // 0x20
};

struct unordered_map_int__unsigned_int__std::hash_int___std::equal_to_int___std::allocator_std::pair_const_int__unsigned_int___ {
    __hash_table_std::__hash_value_type_int__unsigned_int___std::__unordered_map_hasher_int__std::__hash_value_type_int__unsigned_int___std::hash_int___std::equal_to_int____std::__unordered_map_equal_int__std::__hash_value_type_int__unsigned_int___std::equal_to_int___std::hash_int____std::allocator_std::__hash_value_type_int__unsigned_int___ __table_; // 0x0
};

struct BoxesOpenAnimationPrizeData {
    bool                                     _isCollectionCue; // 0x0
    bool                                     _wasCueLocked; // 0x1
    bool                                     _isNewPrize; // 0x2
    basic_string_char__std::char_traits_char___std::allocator_char__ _transactionId; // 0x8
    int32_t                                  _productId; // 0x20
    int32_t                                  _cueCollectionPoints; // 0x24
    uint64_t                                 _total; // 0x28
    int64_t                                  _delta; // 0x30
    int32_t                                  _type; // 0x38
};

struct __compressed_pair_pool::victory_boxes::BoxesOpenAnimationPrizeData____std::allocator_pool::victory_boxes::BoxesOpenAnimationPrizeData__ {
    BoxesOpenAnimationPrizeData*             __value_; // 0x0
};

struct vector_pool::victory_boxes::BoxesOpenAnimationPrizeData__std::allocator_pool::victory_boxes::BoxesOpenAnimationPrizeData__ {
    BoxesOpenAnimationPrizeData*             __begin_; // 0x0
    BoxesOpenAnimationPrizeData*             __end_; // 0x8
    __compressed_pair_pool::victory_boxes::BoxesOpenAnimationPrizeData____std::allocator_pool::victory_boxes::BoxesOpenAnimationPrizeData__ __end_cap_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void________std::allocator_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___CardJumpAnimationSoundTypeHash__std::equal_to_CardJumpAnimationSoundType___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___std::equal_to_CardJumpAnimationSoundType___CardJumpAnimationSoundTypeHash__ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_CardJumpAnimationSoundType__bool___std::__unordered_map_hasher_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___CardJumpAnimationSoundTypeHash__std::equal_to_CardJumpAnimationSoundType____std::__unordered_map_equal_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___std::equal_to_CardJumpAnimationSoundType___CardJumpAnimationSoundTypeHash___std::allocator_std::__hash_value_type_CardJumpAnimationSoundType__bool___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void________std::allocator_std::__hash_node_std::__hash_value_type_CardJumpAnimationSoundType__bool___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___CardJumpAnimationSoundTypeHash__std::equal_to_CardJumpAnimationSoundType___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___std::equal_to_CardJumpAnimationSoundType___CardJumpAnimationSoundTypeHash__ __p3_; // 0x20
};

struct unordered_map_CardJumpAnimationSoundType__bool__CardJumpAnimationSoundTypeHash__std::equal_to_CardJumpAnimationSoundType___std::allocator_std::pair_const_CardJumpAnimationSoundType__bool___ {
    __hash_table_std::__hash_value_type_CardJumpAnimationSoundType__bool___std::__unordered_map_hasher_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___CardJumpAnimationSoundTypeHash__std::equal_to_CardJumpAnimationSoundType____std::__unordered_map_equal_CardJumpAnimationSoundType__std::__hash_value_type_CardJumpAnimationSoundType__bool___std::equal_to_CardJumpAnimationSoundType___CardJumpAnimationSoundTypeHash___std::allocator_std::__hash_value_type_CardJumpAnimationSoundType__bool___ __table_; // 0x0
};

union anon_e24c69 {
    uint8_t                                  __null_state_; // 0x0
    _ccColor4F                               __val_; // 0x0
};

struct optional__ccColor4F_ {
    anon_e24c69                              field_0; // 0x0
    bool                                     __engaged_; // 0x10
};

struct __compressed_pair_pool::tiers::ChampionshipTier____std::default_delete_pool::tiers::ChampionshipTier__ {
    ChampionshipTier*                        __value_; // 0x0
};

struct unique_ptr_pool::tiers::ChampionshipTier__std::default_delete_pool::tiers::ChampionshipTier__ {
    __compressed_pair_pool::tiers::ChampionshipTier____std::default_delete_pool::tiers::ChampionshipTier__ __ptr_; // 0x0
};

struct ChampionshipPotIncrementor {
    CCNodeRGBA_CCLabelProtocol_*             _potLabel; // 0x0
    function_void____                        _startCallback; // 0x8
    function_void____                        _endCallback; // 0x30
    uint64_t                                 _currentPotAmount; // 0x58
    double                                   _showingPotAmount; // 0x60
    uint64_t                                 _potValueStep; // 0x68
};

struct IIngameChatService {
    void***                                  field_0; // 0x0
};

struct __compressed_pair_mc::clubs::ClubFullView____std::default_delete_mc::clubs::ClubFullView__ {
    ClubFullView*                            __value_; // 0x0
};

struct unique_ptr_mc::clubs::ClubFullView__std::default_delete_mc::clubs::ClubFullView__ {
    __compressed_pair_mc::clubs::ClubFullView____std::default_delete_mc::clubs::ClubFullView__ __ptr_; // 0x0
};

struct __compressed_pair_mc::clubs::ClubsConfirmationPopupController____std::default_delete_mc::clubs::ClubsConfirmationPopupController__ {
    ClubsConfirmationPopupController*        __value_; // 0x0
};

struct unique_ptr_mc::clubs::ClubsConfirmationPopupController__std::default_delete_mc::clubs::ClubsConfirmationPopupController__ {
    __compressed_pair_mc::clubs::ClubsConfirmationPopupController____std::default_delete_mc::clubs::ClubsConfirmationPopupController__ __ptr_; // 0x0
};

struct __compressed_pair_mc::clubs::ClubsGenericMessageController____std::default_delete_mc::clubs::ClubsGenericMessageController__ {
    ClubsGenericMessageController*           __value_; // 0x0
};

struct unique_ptr_mc::clubs::ClubsGenericMessageController__std::default_delete_mc::clubs::ClubsGenericMessageController__ {
    __compressed_pair_mc::clubs::ClubsGenericMessageController____std::default_delete_mc::clubs::ClubsGenericMessageController__ __ptr_; // 0x0
};

struct AvatarsStripController {
    AvatarsStripModel                        _configuration; // 0x0
    vector_pool::AvatarsStripNodeBuilder__std::allocator_pool::AvatarsStripNodeBuilder__ _avatars; // 0x28
    AvatarStripView*                         _stripView; // 0x40
};

struct __value_func_void__std::vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string_____ {
    type                                     __buf_; // 0x0
    __base_void__std::vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string_____* __f_; // 0x20
};

struct function_void__std::vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string_____ {
    __value_func_void__std::vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string_____ __f_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::string__void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::less_std::string__ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::string__std::less_std::string___std::allocator_std::string__ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::string__void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::less_std::string__ __pair3_; // 0x10
};

struct set_std::string__std::less_std::string___std::allocator_std::string__ {
    __tree_std::string__std::less_std::string___std::allocator_std::string__ __tree_; // 0x0
};

struct __compressed_pair_std::pair_mc::clubs::ClubInfo__std::vector_std::string______std::allocator_std::pair_mc::clubs::ClubInfo__std::vector_std::string____ {
    pair_mc::clubs::ClubInfo__std::vector_std::string__* __value_; // 0x0
};

struct vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string____std::allocator_std::pair_mc::clubs::ClubInfo__std::vector_std::string____ {
    pair_mc::clubs::ClubInfo__std::vector_std::string__* __begin_; // 0x0
    pair_mc::clubs::ClubInfo__std::vector_std::string__* __end_; // 0x8
    __compressed_pair_std::pair_mc::clubs::ClubInfo__std::vector_std::string______std::allocator_std::pair_mc::clubs::ClubInfo__std::vector_std::string____ __end_cap_; // 0x10
};

struct ClubsRecommendationsHandler {
    function_void__std::vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string_____ _responseCallback; // 0x0
    vector_std::string__std::allocator_std::string__ _clubIdsFromApplication; // 0x28
    vector_std::string__std::allocator_std::string__ _clubIdsWithFriends; // 0x40
    set_std::string__std::less_std::string___std::allocator_std::string__ _friendsUserIds; // 0x58
    vector_std::pair_mc::clubs::ClubInfo__std::vector_std::string____std::allocator_std::pair_mc::clubs::ClubInfo__std::vector_std::string____ _responseVectorOfClubsWithFriendNames; // 0x70
    uint64_t                                 _responseSortOffset; // 0x88
    uint64_t                                 _recommendationsRequestId; // 0x90
    int32_t                                  _fetchedClubsWithFriendsIndex; // 0x98
    int32_t                                  _requestLoopCount; // 0x9C
    bool                                     _includeIdsFromApplication; // 0xA0
};

struct shared_ptr_MenuClubsLandingTabSearchWrapper_ {
    MenuClubsLandingTabSearchWrapper*        __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __compressed_pair_mc::clubs::LeaguesPreviousResultsController____std::default_delete_mc::clubs::LeaguesPreviousResultsController__ {
    LeaguesPreviousResultsController*        __value_; // 0x0
};

struct unique_ptr_mc::clubs::LeaguesPreviousResultsController__std::default_delete_mc::clubs::LeaguesPreviousResultsController__ {
    __compressed_pair_mc::clubs::LeaguesPreviousResultsController____std::default_delete_mc::clubs::LeaguesPreviousResultsController__ __ptr_; // 0x0
};

struct __compressed_pair_mc::clubs::ILevelRequirementView____std::default_delete_mc::clubs::ILevelRequirementView__ {
    ILevelRequirementView*                   __value_; // 0x0
};

struct unique_ptr_mc::clubs::ILevelRequirementView__std::default_delete_mc::clubs::ILevelRequirementView__ {
    __compressed_pair_mc::clubs::ILevelRequirementView____std::default_delete_mc::clubs::ILevelRequirementView__ __ptr_; // 0x0
};

struct MinimumWinningsView {
    id                                       field_0; // 0x0
};

struct __compressed_pair_mc::clubs::MinimumWinningsView____std::default_delete_mc::clubs::MinimumWinningsView__ {
    MinimumWinningsView*                     __value_; // 0x0
};

struct unique_ptr_mc::clubs::MinimumWinningsView__std::default_delete_mc::clubs::MinimumWinningsView__ {
    __compressed_pair_mc::clubs::MinimumWinningsView____std::default_delete_mc::clubs::MinimumWinningsView__ __ptr_; // 0x0
};

struct CueUpgradeViewCommonBehaviour {
    CueStats                                 _cueStatsDelta; // 0x0
    CueParameters                            _cueParameters; // 0x10
    int32_t                                  _coinsDelta; // 0x50
    int32_t                                  _coinsRefund; // 0x54
    int32_t                                  _xpDelta; // 0x58
    int32_t                                  _vipXpDelta; // 0x5C
    int32_t                                  _cueCollectionPointsDelta; // 0x60
    int32_t                                  _levelDelta; // 0x64
    Callback*                                _delayedLeaveCallback; // 0x68
    bool                                     _isAnimating; // 0x70
};

struct IFriendsService {
    void***                                  field_0; // 0x0
    int8_t                                   field_1; // 0x8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__MenuGameTypeEventButton_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__MenuGameTypeEventButton_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__MenuGameTypeEventButton____std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__MenuGameTypeEventButton_____ {
    __hash_table_std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuGameTypeEventButton_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__MenuGameTypeEventButton_____ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void________std::allocator_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc__ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc___std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc___std::allocator_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void________std::allocator_std::__hash_node_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc__ __p3_; // 0x20
};

struct unordered_map_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value___mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc__std::allocator_std::pair_const_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____ {
    __hash_table_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____std::__unordered_map_hasher_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperHashFunc__mc::ConstStringRefWrapperEqualFunc___std::__unordered_map_equal_std::reference_wrapper_const_std::string___std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____mc::ConstStringRefWrapperEqualFunc__mc::ConstStringRefWrapperHashFunc___std::allocator_std::__hash_value_type_std::reference_wrapper_const_std::string___std::reference_wrapper_const_mc::Value____ __table_; // 0x0
};

struct __compressed_pair_pool::suggestedGifts::SuggestedGiftToken____std::default_delete_pool::suggestedGifts::SuggestedGiftToken__ {
    SuggestedGiftToken*                      __value_; // 0x0
};

struct unique_ptr_pool::suggestedGifts::SuggestedGiftToken__std::default_delete_pool::suggestedGifts::SuggestedGiftToken__ {
    __compressed_pair_pool::suggestedGifts::SuggestedGiftToken____std::default_delete_pool::suggestedGifts::SuggestedGiftToken__ __ptr_; // 0x0
};

struct FlipInformation {
    bool                                     valid; // 0x0
    bool                                     ticketChanged; // 0x1
    bool                                     newTable; // 0x2
    bool                                     lastTargetAreaCleared; // 0x3
};

struct array_GoldenShotPrizeNode____4UL_ {
    GoldenShotPrizeNode*[4]                  __elems_; // 0x0
};

struct GoldenShotPrize {
    int32_t                                  type; // 0x0
    int32_t                                  id; // 0x4
    int32_t                                  amount; // 0x8
};

struct __compressed_pair_pool::dailyMissions::DailyMissionsBubble____std::default_delete_pool::dailyMissions::DailyMissionsBubble__ {
    DailyMissionsBubble*                     __value_; // 0x0
};

struct unique_ptr_pool::dailyMissions::DailyMissionsBubble__std::default_delete_pool::dailyMissions::DailyMissionsBubble__ {
    __compressed_pair_pool::dailyMissions::DailyMissionsBubble____std::default_delete_pool::dailyMissions::DailyMissionsBubble__ __ptr_; // 0x0
};

struct __compressed_pair_pool::dailyMissions::DailyMissionsButtonEventController____std::default_delete_pool::dailyMissions::DailyMissionsButtonEventController__ {
    DailyMissionsButtonEventController*      __value_; // 0x0
};

struct unique_ptr_pool::dailyMissions::DailyMissionsButtonEventController__std::default_delete_pool::dailyMissions::DailyMissionsButtonEventController__ {
    __compressed_pair_pool::dailyMissions::DailyMissionsButtonEventController____std::default_delete_pool::dailyMissions::DailyMissionsButtonEventController__ __ptr_; // 0x0
};

struct ScrollViewExecuteScrollParameters {
    int16_t                                  scrollListTag; // 0x0
    Value                                    targetNodeTag; // 0x8
    Value                                    horizontalScrollPercentage; // 0x18
    float                                    scrollDuration; // 0x28
    CGPoint                                  viewAnchorPoint; // 0x30
    CGPoint                                  itemAnchorPoint; // 0x40
};

struct __compressed_pair_pool::leaderboards::LeaderboardEntryData____std::allocator_pool::leaderboards::LeaderboardEntryData__ {
    LeaderboardEntryData*                    __value_; // 0x0
};

struct vector_pool::leaderboards::LeaderboardEntryData__std::allocator_pool::leaderboards::LeaderboardEntryData__ {
    LeaderboardEntryData*                    __begin_; // 0x0
    LeaderboardEntryData*                    __end_; // 0x8
    __compressed_pair_pool::leaderboards::LeaderboardEntryData____std::allocator_pool::leaderboards::LeaderboardEntryData__ __end_cap_; // 0x10
};

struct __compressed_pair_pool::leaderboards::LeaderboardEntryData____std::default_delete_pool::leaderboards::LeaderboardEntryData__ {
    LeaderboardEntryData*                    __value_; // 0x0
};

struct unique_ptr_pool::leaderboards::LeaderboardEntryData__std::default_delete_pool::leaderboards::LeaderboardEntryData__ {
    __compressed_pair_pool::leaderboards::LeaderboardEntryData____std::default_delete_pool::leaderboards::LeaderboardEntryData__ __ptr_; // 0x0
};

struct Optional_pool::leaderboards::LeaderboardEntryData_ {
    unique_ptr_pool::leaderboards::LeaderboardEntryData__std::default_delete_pool::leaderboards::LeaderboardEntryData__ _t; // 0x0
};

struct __compressed_pair_pool::leaderboards::LeaderboardAwardData____std::allocator_pool::leaderboards::LeaderboardAwardData__ {
    LeaderboardAwardData*                    __value_; // 0x0
};

struct vector_pool::leaderboards::LeaderboardAwardData__std::allocator_pool::leaderboards::LeaderboardAwardData__ {
    LeaderboardAwardData*                    __begin_; // 0x0
    LeaderboardAwardData*                    __end_; // 0x8
    __compressed_pair_pool::leaderboards::LeaderboardAwardData____std::allocator_pool::leaderboards::LeaderboardAwardData__ __end_cap_; // 0x10
};

struct __compressed_pair_pool::leaderboards::LeaderboardProgressionData____std::default_delete_pool::leaderboards::LeaderboardProgressionData__ {
    LeaderboardProgressionData*              __value_; // 0x0
};

struct unique_ptr_pool::leaderboards::LeaderboardProgressionData__std::default_delete_pool::leaderboards::LeaderboardProgressionData__ {
    __compressed_pair_pool::leaderboards::LeaderboardProgressionData____std::default_delete_pool::leaderboards::LeaderboardProgressionData__ __ptr_; // 0x0
};

struct Optional_pool::leaderboards::LeaderboardProgressionData_ {
    unique_ptr_pool::leaderboards::LeaderboardProgressionData__std::default_delete_pool::leaderboards::LeaderboardProgressionData__ _t; // 0x0
};

struct __compressed_pair_LeaderboardInstantPromotionData____std::default_delete_LeaderboardInstantPromotionData__ {
    LeaderboardInstantPromotionData*         __value_; // 0x0
};

struct unique_ptr_LeaderboardInstantPromotionData__std::default_delete_LeaderboardInstantPromotionData__ {
    __compressed_pair_LeaderboardInstantPromotionData____std::default_delete_LeaderboardInstantPromotionData__ __ptr_; // 0x0
};

struct Optional_LeaderboardInstantPromotionData_ {
    unique_ptr_LeaderboardInstantPromotionData__std::default_delete_LeaderboardInstantPromotionData__ _t; // 0x0
};

struct LeaderboardTableData {
    vector_pool::leaderboards::LeaderboardEntryData__std::allocator_pool::leaderboards::LeaderboardEntryData__ entries; // 0x0
    Optional_pool::leaderboards::LeaderboardEntryData_ userEntry; // 0x18
    vector_pool::leaderboards::LeaderboardAwardData__std::allocator_pool::leaderboards::LeaderboardAwardData__ classicAwards; // 0x20
    bool                                     isScoringUnitTrophies; // 0x38
    Optional_pool::leaderboards::LeaderboardProgressionData_ progressionData; // 0x40
    Optional_LeaderboardInstantPromotionData_ instantPromotionData; // 0x48
};

struct LeaderboardResultData {
    int32_t                                  type; // 0x0
    Optional_unsigned_int_                   rank; // 0x8
    vector_pool::leaderboards::LeaderboardAwardData__std::allocator_pool::leaderboards::LeaderboardAwardData__ awards; // 0x10
    basic_string_char__std::char_traits_char___std::allocator_char__ country; // 0x28
    vector_pool::leaderboards::LeaderboardEntryData__std::allocator_pool::leaderboards::LeaderboardEntryData__ topEntries; // 0x40
    Optional_unsigned_int_                   leagueId; // 0x58
    uint64_t                                 winnings; // 0x60
};

struct __compressed_pair_pool::leaderboards::LeaderboardResultData____std::allocator_pool::leaderboards::LeaderboardResultData__ {
    LeaderboardResultData*                   __value_; // 0x0
};

struct vector_pool::leaderboards::LeaderboardResultData__std::allocator_pool::leaderboards::LeaderboardResultData__ {
    LeaderboardResultData*                   __begin_; // 0x0
    LeaderboardResultData*                   __end_; // 0x8
    __compressed_pair_pool::leaderboards::LeaderboardResultData____std::allocator_pool::leaderboards::LeaderboardResultData__ __end_cap_; // 0x10
};

struct LeaderboardData {
    bool                                     isFeatureAvailable; // 0x0
    bool                                     isPreparingResults; // 0x1
    LeaderboardTableData                     friendsTable; // 0x8
    LeaderboardTableData                     countryTable; // 0x58
    basic_string_char__std::char_traits_char___std::allocator_char__ country; // 0xA8
    LeaderboardTableData                     worldTable; // 0xC0
    LeaderboardTableData                     leagueTable; // 0x110
    uint32_t                                 leagueId; // 0x160
    vector_pool::leaderboards::LeaderboardResultData__std::allocator_pool::leaderboards::LeaderboardResultData__ lastWeekResults; // 0x168
};

struct __compressed_pair_pool::leaderboards::SocialRewardTokenData____std::allocator_pool::leaderboards::SocialRewardTokenData__ {
    SocialRewardTokenData*                   __value_; // 0x0
};

struct vector_pool::leaderboards::SocialRewardTokenData__std::allocator_pool::leaderboards::SocialRewardTokenData__ {
    SocialRewardTokenData*                   __begin_; // 0x0
    SocialRewardTokenData*                   __end_; // 0x8
    __compressed_pair_pool::leaderboards::SocialRewardTokenData____std::allocator_pool::leaderboards::SocialRewardTokenData__ __end_cap_; // 0x10
};

struct __compressed_pair_pool::leaderboards::LeagueTransitionData____std::default_delete_pool::leaderboards::LeagueTransitionData__ {
    LeagueTransitionData*                    __value_; // 0x0
};

struct unique_ptr_pool::leaderboards::LeagueTransitionData__std::default_delete_pool::leaderboards::LeagueTransitionData__ {
    __compressed_pair_pool::leaderboards::LeagueTransitionData____std::default_delete_pool::leaderboards::LeagueTransitionData__ __ptr_; // 0x0
};

struct Optional_pool::leaderboards::LeagueTransitionData_ {
    unique_ptr_pool::leaderboards::LeagueTransitionData__std::default_delete_pool::leaderboards::LeagueTransitionData__ _t; // 0x0
};

struct LeaderboardWeeklyResultData {
    vector_pool::leaderboards::LeaderboardResultData__std::allocator_pool::leaderboards::LeaderboardResultData__ leaderboards; // 0x0
    vector_pool::leaderboards::SocialRewardTokenData__std::allocator_pool::leaderboards::SocialRewardTokenData__ socialTokenData; // 0x18
    Optional_pool::leaderboards::LeagueTransitionData_ leagueTransition; // 0x30
};

struct shared_ptr_session_state_ {
    session_state*                           __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_QueuableStateTransition__void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::less_QueuableStateTransition__ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_QueuableStateTransition__std::less_QueuableStateTransition___std::allocator_QueuableStateTransition__ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_QueuableStateTransition__void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::less_QueuableStateTransition__ __pair3_; // 0x10
};

struct set_QueuableStateTransition__std::less_QueuableStateTransition___std::allocator_QueuableStateTransition__ {
    __tree_QueuableStateTransition__std::less_QueuableStateTransition___std::allocator_QueuableStateTransition__ __tree_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_MenuState__void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::less_MenuState__ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_MenuState__std::less_MenuState___std::allocator_MenuState__ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_MenuState__void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::less_MenuState__ __pair3_; // 0x10
};

struct set_MenuState__std::less_MenuState___std::allocator_MenuState__ {
    __tree_MenuState__std::less_MenuState___std::allocator_MenuState__ __tree_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__MenuState___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuState___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuState___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__MenuState___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuState___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuState___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__MenuState___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__MenuState___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__MenuState___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuState___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuState___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__MenuState__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__MenuState___ {
    __hash_table_std::__hash_value_type_std::string__MenuState___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__MenuState___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__MenuState___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__MenuState___ __table_; // 0x0
};

struct __compressed_pair_pool::playSomeoneNew::PlaySomeoneNewFriendItem____std::allocator_pool::playSomeoneNew::PlaySomeoneNewFriendItem__ {
    PlaySomeoneNewFriendItem*                __value_; // 0x0
};

struct vector_pool::playSomeoneNew::PlaySomeoneNewFriendItem__std::allocator_pool::playSomeoneNew::PlaySomeoneNewFriendItem__ {
    PlaySomeoneNewFriendItem*                __begin_; // 0x0
    PlaySomeoneNewFriendItem*                __end_; // 0x8
    __compressed_pair_pool::playSomeoneNew::PlaySomeoneNewFriendItem____std::allocator_pool::playSomeoneNew::PlaySomeoneNewFriendItem__ __end_cap_; // 0x10
};

struct IFriendsOfFriendsService {
    void***                                  field_0; // 0x0
};

struct GenericAnimation {
    int32_t                                  _value; // 0x0
};

struct shared_ptr_MenuSettingsNodeWrapper_ {
    MenuSettingsNodeWrapper*                 __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct shared_ptr_pool::cues::Cue_ {
    Cue*                                     __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __compressed_pair_std::shared_ptr_pool::cues::Cue_____std::allocator_std::shared_ptr_pool::cues::Cue___ {
    shared_ptr_pool::cues::Cue_*             __value_; // 0x0
};

struct vector_std::shared_ptr_pool::cues::Cue___std::allocator_std::shared_ptr_pool::cues::Cue___ {
    shared_ptr_pool::cues::Cue_*             __begin_; // 0x0
    shared_ptr_pool::cues::Cue_*             __end_; // 0x8
    __compressed_pair_std::shared_ptr_pool::cues::Cue_____std::allocator_std::shared_ptr_pool::cues::Cue___ __end_cap_; // 0x10
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__std::vector_CCSprite______void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__std::vector_CCSprite______std::less_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_std::string__std::vector_CCSprite______std::__map_value_compare_std::string__std::__value_type_std::string__std::vector_CCSprite______std::less_std::string____std::allocator_std::__value_type_std::string__std::vector_CCSprite______ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__std::vector_CCSprite______void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__std::vector_CCSprite______std::less_std::string___ __pair3_; // 0x10
};

struct map_std::string__std::vector_CCSprite_____std::less_std::string___std::allocator_std::pair_const_std::string__std::vector_CCSprite______ {
    __tree_std::__value_type_std::string__std::vector_CCSprite______std::__map_value_compare_std::string__std::__value_type_std::string__std::vector_CCSprite______std::less_std::string____std::allocator_std::__value_type_std::string__std::vector_CCSprite______ __tree_; // 0x0
};

struct SpritePool {
    map_std::string__std::vector_CCSprite_____std::less_std::string___std::allocator_std::pair_const_std::string__std::vector_CCSprite______ _pool; // 0x0
};

struct __compressed_pair_pool::objectPool::PoolSpriteObject____std::default_delete_pool::objectPool::PoolSpriteObject__ {
    PoolSpriteObject*                        __value_; // 0x0
};

struct unique_ptr_pool::objectPool::PoolSpriteObject__std::default_delete_pool::objectPool::PoolSpriteObject__ {
    __compressed_pair_pool::objectPool::PoolSpriteObject____std::default_delete_pool::objectPool::PoolSpriteObject__ __ptr_; // 0x0
};

struct __compressed_pair_std::unique_ptr_pool::objectPool::PoolSpriteObject_____std::allocator_std::unique_ptr_pool::objectPool::PoolSpriteObject___ {
    unique_ptr_pool::objectPool::PoolSpriteObject__std::default_delete_pool::objectPool::PoolSpriteObject__* __value_; // 0x0
};

struct vector_std::unique_ptr_pool::objectPool::PoolSpriteObject___std::allocator_std::unique_ptr_pool::objectPool::PoolSpriteObject___ {
    unique_ptr_pool::objectPool::PoolSpriteObject__std::default_delete_pool::objectPool::PoolSpriteObject__* __begin_; // 0x0
    unique_ptr_pool::objectPool::PoolSpriteObject__std::default_delete_pool::objectPool::PoolSpriteObject__* __end_; // 0x8
    __compressed_pair_std::unique_ptr_pool::objectPool::PoolSpriteObject_____std::allocator_std::unique_ptr_pool::objectPool::PoolSpriteObject___ __end_cap_; // 0x10
};

struct __compressed_pair_pool::table_decals::TableDecalInfo____std::allocator_pool::table_decals::TableDecalInfo__ {
    TableDecalInfo*                          __value_; // 0x0
};

struct vector_pool::table_decals::TableDecalInfo__std::allocator_pool::table_decals::TableDecalInfo__ {
    TableDecalInfo*                          __begin_; // 0x0
    TableDecalInfo*                          __end_; // 0x8
    __compressed_pair_pool::table_decals::TableDecalInfo____std::allocator_pool::table_decals::TableDecalInfo__ __end_cap_; // 0x10
};

struct __compressed_pair_MenuShopDecalNode_____std::allocator_MenuShopDecalNode____ {
    id*                                      __value_; // 0x0
};

struct vector_MenuShopDecalNode____std::allocator_MenuShopDecalNode____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_MenuShopDecalNode_____std::allocator_MenuShopDecalNode____ __end_cap_; // 0x10
};

struct RepeatedPtrField_user_info_update_ {
    void**                                   elements_; // 0x0
    int32_t                                  current_size_; // 0x8
    int32_t                                  allocated_size_; // 0xC
    int32_t                                  total_size_; // 0x10
};

struct RepeatedPtrField_cue_piece_refund_ {
    void**                                   elements_; // 0x0
    int32_t                                  current_size_; // 0x8
    int32_t                                  allocated_size_; // 0xC
    int32_t                                  total_size_; // 0x10
};

struct __compressed_pair_MenuTournamentBoardGame_____std::allocator_MenuTournamentBoardGame____ {
    id*                                      __value_; // 0x0
};

struct vector_MenuTournamentBoardGame____std::allocator_MenuTournamentBoardGame____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_MenuTournamentBoardGame_____std::allocator_MenuTournamentBoardGame____ __end_cap_; // 0x10
};

struct match_data {
    void***                                  _vptr_MessageLite; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _unknown_fields_; // 0x8
    uint32_t[1]                              _has_bits_; // 0x20
    int32_t                                  _cached_size_; // 0x24
    int32_t                                  state_; // 0x28
    uint32_t                                 row_; // 0x2C
    basic_string_char__std::char_traits_char___std::allocator_char__* player_a_; // 0x30
    uint32_t                                 column_; // 0x38
    uint32_t                                 player_a_level_; // 0x3C
    basic_string_char__std::char_traits_char___std::allocator_char__* player_a_display_name_; // 0x40
    basic_string_char__std::char_traits_char___std::allocator_char__* player_b_; // 0x48
    basic_string_char__std::char_traits_char___std::allocator_char__* player_b_display_name_; // 0x50
    basic_string_char__std::char_traits_char___std::allocator_char__* winner_; // 0x58
    uint32_t                                 player_b_level_; // 0x60
    uint32_t                                 player_a_league_; // 0x64
    uint32_t                                 player_b_league_; // 0x68
    uint32_t                                 player_a_cue_collection_rank_; // 0x6C
    basic_string_char__std::char_traits_char___std::allocator_char__* player_a_medal_product_id_; // 0x70
    basic_string_char__std::char_traits_char___std::allocator_char__* player_b_medal_product_id_; // 0x78
    uint32_t                                 player_b_cue_collection_rank_; // 0x80
};

struct SpectatorButtonState {
    bool                                     visible; // 0x0
    bool                                     enabled; // 0x1
};

struct __compressed_pair_LobbyUser_____std::allocator_LobbyUser____ {
    LobbyUser**                              __value_; // 0x0
};

struct __split_buffer_LobbyUser____std::allocator_LobbyUser____ {
    LobbyUser**                              __first_; // 0x0
    LobbyUser**                              __begin_; // 0x8
    LobbyUser**                              __end_; // 0x10
    __compressed_pair_LobbyUser_____std::allocator_LobbyUser____ __end_cap_; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_LobbyUser__ {
    uint64_t                                 __value_; // 0x0
};

struct deque_LobbyUser__std::allocator_LobbyUser__ {
    __split_buffer_LobbyUser____std::allocator_LobbyUser____ __map_; // 0x0
    uint64_t                                 __start_; // 0x20
    __compressed_pair_unsigned_long__std::allocator_LobbyUser__ __size_; // 0x28
};

struct LobbyData {
    basic_string_char__std::char_traits_char___std::allocator_char__ lobbyCode; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ tierCode; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ chatChannelId; // 0x30
    bool                                     isHost; // 0x48
    uint64_t                                 serverStartTimestampInSeconds; // 0x50
    deque_LobbyUser__std::allocator_LobbyUser__ users; // 0x58
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__TournamentLobbyPlayerNode____std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__TournamentLobbyPlayerNode_____ {
    __hash_table_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__TournamentLobbyPlayerNode_____ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void________std::allocator_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::hash_TournamentLobbyPlayerNode_____std::equal_to_TournamentLobbyPlayerNode_____ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::equal_to_TournamentLobbyPlayerNode_____std::hash_TournamentLobbyPlayerNode_____ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::__unordered_map_hasher_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::hash_TournamentLobbyPlayerNode_____std::equal_to_TournamentLobbyPlayerNode______std::__unordered_map_equal_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::equal_to_TournamentLobbyPlayerNode_____std::hash_TournamentLobbyPlayerNode______std::allocator_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void________std::allocator_std::__hash_node_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::hash_TournamentLobbyPlayerNode_____std::equal_to_TournamentLobbyPlayerNode_____ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::equal_to_TournamentLobbyPlayerNode_____std::hash_TournamentLobbyPlayerNode_____ __p3_; // 0x20
};

struct unordered_map_TournamentLobbyPlayerNode____ChatBubble____std::hash_TournamentLobbyPlayerNode_____std::equal_to_TournamentLobbyPlayerNode_____std::allocator_std::pair_TournamentLobbyPlayerNode__const__ChatBubble_____ {
    __hash_table_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::__unordered_map_hasher_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::hash_TournamentLobbyPlayerNode_____std::equal_to_TournamentLobbyPlayerNode______std::__unordered_map_equal_TournamentLobbyPlayerNode____std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____std::equal_to_TournamentLobbyPlayerNode_____std::hash_TournamentLobbyPlayerNode______std::allocator_std::__hash_value_type_TournamentLobbyPlayerNode____ChatBubble_____ __table_; // 0x0
};

struct RepeatedPtrField_cue_info_ {
    void**                                   field_0; // 0x0
    int32_t                                  field_1; // 0x8
    int32_t                                  field_2; // 0xC
    int32_t                                  field_3; // 0x10
};

struct cue_list {
    void***                                  field_0; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ field_1; // 0x8
    uint32_t[1]                              field_2; // 0x20
    int32_t                                  field_3; // 0x24
    RepeatedPtrField_cue_info_               field_4; // 0x28
};

struct UserAlias {
    basic_string_char__std::char_traits_char___std::allocator_char__ userName; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ country; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x30
};

struct PlayerProfileMiniInfo {
    CueParameters                            cueParameters; // 0x0
    ClubInfo                                 clubInfo; // 0x40
    cue_list*                                cueList; // 0x120
    vector_pool::leaderboards::medals::LeaderboardMedalUIData__std::allocator_pool::leaderboards::medals::LeaderboardMedalUIData__ leagueMedals; // 0x128
    vector_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___std::allocator_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___ cups; // 0x140
    vector_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___std::allocator_std::pair_pool::cup_product_utils::CupProductDTO__unsigned_char___ unfilteredCups; // 0x158
    vector_pool::cheering::ReceivedGiftDTO__std::allocator_pool::cheering::ReceivedGiftDTO__ receivedCheerGifts; // 0x170
    NSDictionary*                            tierRings; // 0x188
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x190
    basic_string_char__std::char_traits_char___std::allocator_char__ username; // 0x1A8
    basic_string_char__std::char_traits_char___std::allocator_char__ countryCode; // 0x1C0
    UserAlias                                userAlias; // 0x1D8
    uint64_t                                 totalWinnings; // 0x220
    uint64_t                                 tournamentWinnnings; // 0x228
    uint64_t                                 coinsBalance; // 0x230
    int32_t                                  level; // 0x238
    int32_t                                  winStreak; // 0x23C
    int32_t                                  tournamentsWon; // 0x240
    int32_t                                  tournamentsPlayed; // 0x244
    int32_t                                  league; // 0x248
    int32_t                                  ballsPotted; // 0x24C
    int32_t                                  gamesWon; // 0x250
    int32_t                                  gamesPlayed; // 0x254
    int32_t                                  vipTier; // 0x258
    int32_t                                  selectedCue; // 0x25C
    int32_t                                  userScore; // 0x260
    int32_t                                  profileOwnerScore; // 0x264
    uint32_t                                 cueCollectionRank; // 0x268
    uint64_t                                 cheersSent; // 0x270
    uint64_t                                 cheersReceived; // 0x278
    bool                                     allowAddAsAFriend; // 0x280
    bool                                     hasClubInfo; // 0x281
    bool                                     hasLeague; // 0x282
    bool                                     isFriend; // 0x283
    bool                                     isFriendOfFriend; // 0x284
    bool                                     isRealFacebookFriend; // 0x285
    bool                                     isClubFeatureActive; // 0x286
    int8_t                                   isProfileOwnedByUser; // 0x287
    int8_t                                   showVipButton; // 0x288
    int8_t                                   showVipBadge; // 0x289
    int8_t                                   disableGiftButton; // 0x28A
    NSArray*                                 fullAchievementsList; // 0x290
    StringMap                                segmentationData; // 0x298
};

struct VictoryBoxSlotData {
    int32_t                                  _state; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ _productId; // 0x8
    Date                                     _unlockDate; // 0x20
    uint64_t                                 _lockDuration; // 0x28
    int32_t                                  _ftueBoxNumber; // 0x30
    int32_t                                  _index; // 0x34
    bool                                     _acquisitionToken; // 0x38
    Optional_unsigned_int_                   _cachedSkippableSeconds; // 0x40
};

struct __compressed_pair_pool::victory_boxes::VictoryBoxSlotData____std::default_delete_pool::victory_boxes::VictoryBoxSlotData__ {
    VictoryBoxSlotData*                      __value_; // 0x0
};

struct unique_ptr_pool::victory_boxes::VictoryBoxSlotData__std::default_delete_pool::victory_boxes::VictoryBoxSlotData__ {
    __compressed_pair_pool::victory_boxes::VictoryBoxSlotData____std::default_delete_pool::victory_boxes::VictoryBoxSlotData__ __ptr_; // 0x0
};

struct WinStreakEventInstance {
    uint32_t                                 _maxWins; // 0x0
    uint32_t                                 _maxLosses; // 0x4
    uint32_t                                 _currentWins; // 0x8
    uint32_t                                 _currentLosses; // 0xC
    uint8_t                                  _currentCompletions; // 0x10
    uint8_t                                  _completionLimit; // 0x11
    int32_t                                  _currentState; // 0x14
};

struct __compressed_pair_pool::winStreak::PrizeWidgetNodeBuilder____std::allocator_pool::winStreak::PrizeWidgetNodeBuilder__ {
    PrizeWidgetNodeBuilder*                  __value_; // 0x0
};

struct vector_pool::winStreak::PrizeWidgetNodeBuilder__std::allocator_pool::winStreak::PrizeWidgetNodeBuilder__ {
    PrizeWidgetNodeBuilder*                  __begin_; // 0x0
    PrizeWidgetNodeBuilder*                  __end_; // 0x8
    __compressed_pair_pool::winStreak::PrizeWidgetNodeBuilder____std::allocator_pool::winStreak::PrizeWidgetNodeBuilder__ __end_cap_; // 0x10
};

struct IMessageView {
    void***                                  field_0; // 0x0
    id                                       field_1; // 0x8
    MessageViewFactory*                      field_2; // 0x10
    uint64_t                                 field_3; // 0x18
    int32_t                                  field_4; // 0x20
    bool                                     field_5; // 0x24
};

struct __value_func_void__unsigned_int__ {
    type                                     __buf_; // 0x0
    __base_void__unsigned_int__*             __f_; // 0x20
};

struct function_void__unsigned_int__ {
    __value_func_void__unsigned_int__        __f_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_pool::minigames_center::MinigameTab__std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____std::less_pool::minigames_center::MinigameTab___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____std::__map_value_compare_pool::minigames_center::MinigameTab__std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____std::less_pool::minigames_center::MinigameTab____std::allocator_std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_pool::minigames_center::MinigameTab__std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____std::less_pool::minigames_center::MinigameTab___ __pair3_; // 0x10
};

struct map_pool::minigames_center::MinigameTab__MinigameTabContent____std::less_pool::minigames_center::MinigameTab___std::allocator_std::pair_const_pool::minigames_center::MinigameTab__MinigameTabContent_____ {
    __tree_std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____std::__map_value_compare_pool::minigames_center::MinigameTab__std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____std::less_pool::minigames_center::MinigameTab____std::allocator_std::__value_type_pool::minigames_center::MinigameTab__MinigameTabContent_____ __tree_; // 0x0
};

struct anon_8068c9 {
    double                                   m11; // 0x0
    double                                   m12; // 0x8
    double                                   m21; // 0x10
    double                                   m22; // 0x18
    double                                   tX; // 0x20
    double                                   tY; // 0x28
};

struct anon_e473d0 {
    int32_t[12]                              __private; // 0x0
};

struct anon_06456e {
    uint64_t                                 _nBuckets; // 0x0
    _NSDictNode**                            _buckets; // 0x8
    int64_t                                  _i; // 0x10
    _NSDictNode*                             _j; // 0x18
};

struct anon_aa8be9 {
    NSMapTable*                              table; // 0x0
    int64_t                                  i; // 0x8
    _NSMapNode*                              j; // 0x10
};

struct NSSetBucket {
    NSSetBucket*                             field_0; // 0x0
    id                                       field_1; // 0x8
};

struct anon_29ae77 {
    uint64_t                                 field_0; // 0x0
    uint64_t                                 field_1; // 0x8
    NSSetBucket**                            field_2; // 0x10
};

struct _NSRange {
    uint64_t                                 field_0; // 0x0
    uint64_t                                 field_1; // 0x8
};

struct anon_f8525a {
    int32_t                                  version; // 0x0
    void*                                    info; // 0x8
    void**                                   retain; // 0x10
    void**                                   release; // 0x18
    void**                                   copyDescription; // 0x20
};

struct anon_f1afd8 {
    void**                                   field_0; // 0x0
    void**                                   field_1; // 0x8
    void**                                   field_2; // 0x10
    void**                                   field_3; // 0x18
    void**                                   field_4; // 0x20
    void*                                    field_5; // 0x28
};

struct anon_9e01c5 {
    void**                                   field_0; // 0x0
    void**                                   field_1; // 0x8
    void**                                   field_2; // 0x10
};

struct anon_d8e7db {
    int32_t                                  version; // 0x0
    void**                                   retain; // 0x8
    void**                                   release; // 0x10
    void**                                   copyDescription; // 0x18
    void**                                   equal; // 0x20
    void**                                   hash; // 0x28
};

struct anon_c1f8a0 {
    int32_t                                  version; // 0x0
    void**                                   retain; // 0x8
    void**                                   release; // 0x10
    void**                                   copyDescription; // 0x18
    void**                                   equal; // 0x20
};

struct anon_faadac {
    uint64_t                                 count; // 0x0
    uint64_t                                 numBuckets; // 0x8
    NSSetBucket**                            buckets; // 0x10
};

struct NSExceptionFrame {
    int64_t[32]                              field_0; // 0x0
    NSExceptionFrame*                        field_1; // 0x100
    id                                       field_2; // 0x108
};

struct __compressed_pair_OptionListComponentNodeInfoCollection::Item____std::allocator_OptionListComponentNodeInfoCollection::Item__ {
    Item*                                    __value_; // 0x0
};

struct vector_OptionListComponentNodeInfoCollection::Item__std::allocator_OptionListComponentNodeInfoCollection::Item__ {
    Item*                                    __begin_; // 0x0
    Item*                                    __end_; // 0x8
    __compressed_pair_OptionListComponentNodeInfoCollection::Item____std::allocator_OptionListComponentNodeInfoCollection::Item__ __end_cap_; // 0x10
};

struct OptionListComponentNodeInfoCollection {
    vector_OptionListComponentNodeInfoCollection::Item__std::allocator_OptionListComponentNodeInfoCollection::Item__ _items; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__long_long___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long_long___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long_long___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__long_long___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long_long___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long_long___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__long_long___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__long_long___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__long_long___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long_long___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long_long___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__long_long__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__long_long___ {
    __hash_table_std::__hash_value_type_std::string__long_long___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__long_long___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__long_long___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__long_long___ __table_; // 0x0
};

struct PiggyBankLastSeenData {
    uint64_t                                 tokens; // 0x0
    int32_t                                  state; // 0x8
};

struct IShape {
    void***                                  field_0; // 0x0
};

struct pair_std::string__CCNode___ {
    basic_string_char__std::char_traits_char___std::allocator_char__ first; // 0x0
    CCNode*                                  second; // 0x18
};

struct PoolPromoMessageHandler {
    void***                                  field_0; // 0x0
};

struct __compressed_pair_std::shared_ptr_mc::inapppurchases::Transaction______std::allocator_std::shared_ptr_mc::inapppurchases::Transaction_____ {
    shared_ptr_mc::inapppurchases::Transaction_** __value_; // 0x0
};

struct __split_buffer_std::shared_ptr_mc::inapppurchases::Transaction_____std::allocator_std::shared_ptr_mc::inapppurchases::Transaction_____ {
    shared_ptr_mc::inapppurchases::Transaction_** __first_; // 0x0
    shared_ptr_mc::inapppurchases::Transaction_** __begin_; // 0x8
    shared_ptr_mc::inapppurchases::Transaction_** __end_; // 0x10
    __compressed_pair_std::shared_ptr_mc::inapppurchases::Transaction______std::allocator_std::shared_ptr_mc::inapppurchases::Transaction_____ __end_cap_; // 0x18
};

struct __compressed_pair_unsigned_long__std::allocator_std::shared_ptr_mc::inapppurchases::Transaction___ {
    uint64_t                                 __value_; // 0x0
};

struct deque_std::shared_ptr_mc::inapppurchases::Transaction___std::allocator_std::shared_ptr_mc::inapppurchases::Transaction___ {
    __split_buffer_std::shared_ptr_mc::inapppurchases::Transaction_____std::allocator_std::shared_ptr_mc::inapppurchases::Transaction_____ __map_; // 0x0
    uint64_t                                 __start_; // 0x20
    __compressed_pair_unsigned_long__std::allocator_std::shared_ptr_mc::inapppurchases::Transaction___ __size_; // 0x28
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::hash_unsigned_long___std::equal_to_unsigned_long___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::equal_to_unsigned_long___std::hash_unsigned_long___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::hash_unsigned_long___std::equal_to_unsigned_long____std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::equal_to_unsigned_long___std::hash_unsigned_long____std::allocator_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void________std::allocator_std::__hash_node_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::hash_unsigned_long___std::equal_to_unsigned_long___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::equal_to_unsigned_long___std::hash_unsigned_long___ __p3_; // 0x20
};

struct unordered_map_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction___std::hash_unsigned_long___std::equal_to_unsigned_long___std::allocator_std::pair_const_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____ {
    __hash_table_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::__unordered_map_hasher_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::hash_unsigned_long___std::equal_to_unsigned_long____std::__unordered_map_equal_unsigned_long__std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____std::equal_to_unsigned_long___std::hash_unsigned_long____std::allocator_std::__hash_value_type_unsigned_long__std::shared_ptr_mc::inapppurchases::Transaction____ __table_; // 0x0
};

struct anon_59f51f {
    uint32_t                                 field_0; // 0x0
    uint32_t                                 field_1; // 0x4
};

union anon_de69d3 {
    anon_59f51f                              field_0; // 0x0
    anon_59f51f                              field_1; // 0x0
    uint32_t[2]                              field_2; // 0x0
};

struct ShaderBaseConfig {
    float                                    delay; // 0x0
    float                                    speed; // 0x4
    float                                    duration; // 0x8
    uint8_t                                  runs; // 0xC
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UniformValue___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UniformValue___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__UniformValue___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UniformValue___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UniformValue___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__UniformValue___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__UniformValue___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UniformValue___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UniformValue___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__UniformValue__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__UniformValue___ {
    __hash_table_std::__hash_value_type_std::string__UniformValue___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UniformValue___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UniformValue___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__UniformValue___ __table_; // 0x0
};

struct ShaderConfig {
    ShaderBaseConfig                         base; // 0x0
    unordered_map_std::string__UniformValue__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__UniformValue___ uniforms; // 0x10
};

struct ShaderState {
    int32_t                                  state; // 0x0
    float                                    time; // 0x4
    int8_t                                   runCount; // 0x8
};

struct __compressed_pair_pool::product_display::State____std::allocator_pool::product_display::State__ {
    int32_t*                                 __value_; // 0x0
};

struct vector_pool::product_display::State__std::allocator_pool::product_display::State__ {
    int32_t*                                 __begin_; // 0x0
    int32_t*                                 __end_; // 0x8
    __compressed_pair_pool::product_display::State____std::allocator_pool::product_display::State__ __end_cap_; // 0x10
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______std::less_unsigned_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______std::less_unsigned_int___ __pair3_; // 0x10
};

struct map_unsigned_int__std::unordered_set_ProductDisplayWidget_____std::less_unsigned_int___std::allocator_std::pair_const_unsigned_int__std::unordered_set_ProductDisplayWidget______ {
    __tree_std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__std::unordered_set_ProductDisplayWidget______ __tree_; // 0x0
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__mc::Value___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__mc::Value___std::less_unsigned_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_unsigned_int__mc::Value___std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__mc::Value___std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__mc::Value___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__mc::Value___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__mc::Value___std::less_unsigned_int___ __pair3_; // 0x10
};

struct map_unsigned_int__mc::Value__std::less_unsigned_int___std::allocator_std::pair_const_unsigned_int__mc::Value___ {
    __tree_std::__value_type_unsigned_int__mc::Value___std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__mc::Value___std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__mc::Value___ __tree_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void________std::allocator_std::__hash_node_std::__hash_value_type_int__ProductType___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_int__std::__hash_value_type_int__ProductType___std::hash_int___std::equal_to_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_int__std::__hash_value_type_int__ProductType___std::equal_to_int___std::hash_int___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_int__ProductType___std::__unordered_map_hasher_int__std::__hash_value_type_int__ProductType___std::hash_int___std::equal_to_int____std::__unordered_map_equal_int__std::__hash_value_type_int__ProductType___std::equal_to_int___std::hash_int____std::allocator_std::__hash_value_type_int__ProductType___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__ProductType___void________std::allocator_std::__hash_node_std::__hash_value_type_int__ProductType___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_int__std::__hash_value_type_int__ProductType___std::hash_int___std::equal_to_int___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_int__std::__hash_value_type_int__ProductType___std::equal_to_int___std::hash_int___ __p3_; // 0x20
};

struct unordered_map_int__ProductType__std::hash_int___std::equal_to_int___std::allocator_std::pair_const_int__ProductType___ {
    __hash_table_std::__hash_value_type_int__ProductType___std::__unordered_map_hasher_int__std::__hash_value_type_int__ProductType___std::hash_int___std::equal_to_int____std::__unordered_map_equal_int__std::__hash_value_type_int__ProductType___std::equal_to_int___std::hash_int____std::allocator_std::__hash_value_type_int__ProductType___ __table_; // 0x0
};

struct __compressed_pair_ProgressBarNode_____std::allocator_ProgressBarNode____ {
    id*                                      __value_; // 0x0
};

struct vector_ProgressBarNode____std::allocator_ProgressBarNode____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_ProgressBarNode_____std::allocator_ProgressBarNode____ __end_cap_; // 0x10
};

struct kmMat4 {
    float[16]                                field_0; // 0x0
};

struct __compressed_pair_VertexData____std::allocator_VertexData__ {
    anon_5593c3*                             __value_; // 0x0
};

struct vector_VertexData__std::allocator_VertexData__ {
    anon_5593c3*                             __begin_; // 0x0
    anon_5593c3*                             __end_; // 0x8
    __compressed_pair_VertexData____std::allocator_VertexData__ __end_cap_; // 0x10
};

struct __value_func_void__PromoAnchorData____ {
    type                                     __buf_; // 0x0
    __base_void__PromoAnchorData____*        __f_; // 0x20
};

struct function_void__PromoAnchorData____ {
    __value_func_void__PromoAnchorData____   __f_; // 0x0
};

struct objc_protocol_list {
    objc_protocol_list*                      field_0; // 0x0
    int32_t                                  field_1; // 0x8
    id[1]                                    field_2; // 0x10
};

struct objc_method_description {
    char*                                    field_0; // 0x0
    char*                                    field_1; // 0x8
};

struct OBJCMethodDescriptionList {
    int32_t                                  field_0; // 0x0
    objc_method_description[1]               field_1; // 0x8
};

struct shared_ptr_mc::RateDelegate_ {
    RateDelegate*                            __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__CCParticleSystem_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__CCParticleSystem_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__CCParticleSystem_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__CCParticleSystem____std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__CCParticleSystem_____ {
    __hash_table_std::__hash_value_type_std::string__CCParticleSystem_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__CCParticleSystem_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__CCParticleSystem_____ __table_; // 0x0
};

struct shared_ptr_ReplaceableObjectWrapper_ {
    ReplaceableObjectWrapper*                __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct shared_ptr_ReplaceableSpriteWrapper_ {
    ReplaceableSpriteWrapper*                __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct RingWidgetInfo {
    uint32_t                                 ringProductId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ ringName; // 0x8
    StringMap                                ringSpriteInfo; // 0x20
    uint32_t                                 ringOwnedAmount; // 0x48
    bool                                     isLimitedEdition; // 0x4C
};

struct __compressed_pair_RingWidgetInfo____std::allocator_RingWidgetInfo__ {
    RingWidgetInfo*                          __value_; // 0x0
};

struct vector_RingWidgetInfo__std::allocator_RingWidgetInfo__ {
    RingWidgetInfo*                          __begin_; // 0x0
    RingWidgetInfo*                          __end_; // 0x8
    __compressed_pair_RingWidgetInfo____std::allocator_RingWidgetInfo__ __end_cap_; // 0x10
};

struct Prize {
    int32_t                                  prizeAmount; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ id; // 0x8
    uint8_t                                  type; // 0x20
    int32_t                                  specialPrizeType; // 0x24
};

struct Milestone {
    int32_t                                  pointsRequirement; // 0x0
    uint32_t                                 id; // 0x4
    uint8_t                                  state; // 0x8
    Prize                                    prize; // 0x10
};

struct Segment {
    Milestone                                milestone; // 0x0
    int32_t                                  indexInRoad; // 0x38
    uint8_t                                  sideInRoad; // 0x3C
    int32_t                                  previousCap; // 0x40
    bool                                     isLast; // 0x44
};

struct weak_ptr_void_ {
    void*                                    __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct __compressed_pair_NSDictionary_____std::allocator_NSDictionary____ {
    id*                                      __value_; // 0x0
};

struct vector_NSDictionary____std::allocator_NSDictionary____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_NSDictionary_____std::allocator_NSDictionary____ __end_cap_; // 0x10
};

struct __compressed_pair_PrizeWidgetNodeBuilder____std::allocator_PrizeWidgetNodeBuilder__ {
    PrizeWidgetNodeBuilder*                  __value_; // 0x0
};

struct vector_PrizeWidgetNodeBuilder__std::allocator_PrizeWidgetNodeBuilder__ {
    PrizeWidgetNodeBuilder*                  __begin_; // 0x0
    PrizeWidgetNodeBuilder*                  __end_; // 0x8
    __compressed_pair_PrizeWidgetNodeBuilder____std::allocator_PrizeWidgetNodeBuilder__ __end_cap_; // 0x10
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__SeasonPassRank___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__SeasonPassRank___std::less_unsigned_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_unsigned_int__SeasonPassRank___std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__SeasonPassRank___std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__SeasonPassRank___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__SeasonPassRank___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__SeasonPassRank___std::less_unsigned_int___ __pair3_; // 0x10
};

struct map_unsigned_int__SeasonPassRank__std::less_unsigned_int___std::allocator_std::pair_const_unsigned_int__SeasonPassRank___ {
    __tree_std::__value_type_unsigned_int__SeasonPassRank___std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__SeasonPassRank___std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__SeasonPassRank___ __tree_; // 0x0
};

struct __compressed_pair_SeasonPassRank____std::allocator_SeasonPassRank__ {
    SeasonPassRank*                          __value_; // 0x0
};

struct vector_SeasonPassRank__std::allocator_SeasonPassRank__ {
    SeasonPassRank*                          __begin_; // 0x0
    SeasonPassRank*                          __end_; // 0x8
    __compressed_pair_SeasonPassRank____std::allocator_SeasonPassRank__ __end_cap_; // 0x10
};

struct __compressed_pair_SeasonPassRank____std::default_delete_SeasonPassRank__ {
    SeasonPassRank*                          __value_; // 0x0
};

struct unique_ptr_SeasonPassRank__std::default_delete_SeasonPassRank__ {
    __compressed_pair_SeasonPassRank____std::default_delete_SeasonPassRank__ __ptr_; // 0x0
};

struct Optional_SeasonPassRank_ {
    unique_ptr_SeasonPassRank__std::default_delete_SeasonPassRank__ _t; // 0x0
};

struct SeasonPassRanksInformation {
    vector_SeasonPassRank__std::allocator_SeasonPassRank__ _standardRanks; // 0x0
    map_unsigned_int__SeasonPassRank__std::less_unsigned_int___std::allocator_std::pair_const_unsigned_int__SeasonPassRank___ _extraRanks; // 0x18
    Optional_SeasonPassRank_                 _firstEndlessRank; // 0x30
    uint32_t                                 _maxStandardRank; // 0x38
    uint32_t                                 _endlessRankProgressionStep; // 0x3C
    uint16_t                                 _numberOfFreeExtraPrizes; // 0x40
    uint16_t                                 _numberOfFirstPremiumExtraPrizes; // 0x42
    uint16_t                                 _numberOfSecondPremiumExtraPrizes; // 0x44
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__SeasonPassProductNodeUIInfo__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__SeasonPassProductNodeUIInfo___ {
    __hash_table_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__SeasonPassProductNodeUIInfo___ __table_; // 0x0
};

struct SeasonPassPrize {
    int32_t                                  type; // 0x0
    uint8_t                                  rank; // 0x4
    uint8_t                                  position; // 0x5
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___std::less_unsigned_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___std::less_unsigned_int___ __pair3_; // 0x10
};

struct map_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData__std::less_unsigned_int___std::allocator_std::pair_const_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___ {
    __tree_std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___std::__map_value_compare_unsigned_int__std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___std::less_unsigned_int____std::allocator_std::__value_type_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___ __tree_; // 0x0
};

struct __compressed_pair_pool::tle_leaderboards::TleLeaderboardEntryData____std::default_delete_pool::tle_leaderboards::TleLeaderboardEntryData__ {
    TleLeaderboardEntryData*                 __value_; // 0x0
};

struct unique_ptr_pool::tle_leaderboards::TleLeaderboardEntryData__std::default_delete_pool::tle_leaderboards::TleLeaderboardEntryData__ {
    __compressed_pair_pool::tle_leaderboards::TleLeaderboardEntryData____std::default_delete_pool::tle_leaderboards::TleLeaderboardEntryData__ __ptr_; // 0x0
};

struct Optional_pool::tle_leaderboards::TleLeaderboardEntryData_ {
    unique_ptr_pool::tle_leaderboards::TleLeaderboardEntryData__std::default_delete_pool::tle_leaderboards::TleLeaderboardEntryData__ _t; // 0x0
};

struct TleLeaderboardData {
    map_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData__std::less_unsigned_int___std::allocator_std::pair_const_unsigned_int__pool::tle_leaderboards::TleLeaderboardEntryData___ entries; // 0x0
    Optional_pool::tle_leaderboards::TleLeaderboardEntryData_ userEntry; // 0x18
    basic_string_char__std::char_traits_char___std::allocator_char__ identifier; // 0x20
    basic_string_char__std::char_traits_char___std::allocator_char__ scoringUnitProductId; // 0x38
};

struct spAnimationState {
    spAnimationStateData*                    field_0; // 0x0
    int32_t                                  field_1; // 0x8
    spTrackEntry**                           field_2; // 0x10
    void**                                   field_3; // 0x18
    float                                    field_4; // 0x20
    void*                                    field_5; // 0x28
    void*                                    field_6; // 0x30
    int32_t                                  field_7; // 0x38
};

struct spAnimationState_legacy {
    spAnimationStateData_legacy*             field_0; // 0x0
    int32_t                                  field_1; // 0x8
    spTrackEntry_legacy**                    field_2; // 0x10
    void**                                   field_3; // 0x18
    float                                    field_4; // 0x20
    void*                                    field_5; // 0x28
    void*                                    field_6; // 0x30
};

struct spAtlas {
    spAtlasPage*                             field_0; // 0x0
    spAtlasRegion*                           field_1; // 0x8
    void*                                    field_2; // 0x10
};

struct spSkeletonData {
    char*                                    field_0; // 0x0
    char*                                    field_1; // 0x8
    float                                    field_2; // 0x10
    float                                    field_3; // 0x14
    float                                    field_4; // 0x18
    float                                    field_5; // 0x1C
    float                                    field_6; // 0x20
    char*                                    field_7; // 0x28
    char*                                    field_8; // 0x30
    int32_t                                  field_9; // 0x38
    char**                                   field_10; // 0x40
    int32_t                                  field_11; // 0x48
    spBoneData**                             field_12; // 0x50
    int32_t                                  field_13; // 0x58
    spSlotData**                             field_14; // 0x60
    int32_t                                  field_15; // 0x68
    spSkin**                                 field_16; // 0x70
    spSkin*                                  field_17; // 0x78
    int32_t                                  field_18; // 0x80
    spEventData**                            field_19; // 0x88
    int32_t                                  field_20; // 0x90
    spAnimation**                            field_21; // 0x98
    int32_t                                  field_22; // 0xA0
    spIkConstraintData**                     field_23; // 0xA8
    int32_t                                  field_24; // 0xB0
    spTransformConstraintData**              field_25; // 0xB8
    int32_t                                  field_26; // 0xC0
    spPathConstraintData**                   field_27; // 0xC8
};

struct spAtlas_legacy {
    spAtlasPage_legacy*                      field_0; // 0x0
    spAtlasRegion_legacy*                    field_1; // 0x8
    void*                                    field_2; // 0x10
};

struct spSkeletonData_legacy {
    char*                                    field_0; // 0x0
    char*                                    field_1; // 0x8
    float                                    field_2; // 0x10
    float                                    field_3; // 0x14
    int32_t                                  field_4; // 0x18
    spBoneData_legacy**                      field_5; // 0x20
    int32_t                                  field_6; // 0x28
    spSlotData_legacy**                      field_7; // 0x30
    int32_t                                  field_8; // 0x38
    spSkin_legacy**                          field_9; // 0x40
    spSkin_legacy*                           field_10; // 0x48
    int32_t                                  field_11; // 0x50
    spEventData_legacy**                     field_12; // 0x58
    int32_t                                  field_13; // 0x60
    spAnimation_legacy**                     field_14; // 0x68
    int32_t                                  field_15; // 0x70
    spIkConstraintData_legacy**              field_16; // 0x78
    int32_t                                  field_17; // 0x80
    spTransformConstraintData_legacy**       field_18; // 0x88
    int32_t                                  field_19; // 0x90
    spPathConstraintData_legacy**            field_20; // 0x98
};

struct spBone {
    spBoneData*                              field_0; // 0x0
    spSkeleton*                              field_1; // 0x8
    spBone*                                  field_2; // 0x10
    int32_t                                  field_3; // 0x18
    spBone**                                 field_4; // 0x20
    float                                    field_5; // 0x28
    float                                    field_6; // 0x2C
    float                                    field_7; // 0x30
    float                                    field_8; // 0x34
    float                                    field_9; // 0x38
    float                                    field_10; // 0x3C
    float                                    field_11; // 0x40
    float                                    field_12; // 0x44
    float                                    field_13; // 0x48
    float                                    field_14; // 0x4C
    float                                    field_15; // 0x50
    float                                    field_16; // 0x54
    float                                    field_17; // 0x58
    float                                    field_18; // 0x5C
    float                                    field_19; // 0x60
    float                                    field_20; // 0x64
    float                                    field_21; // 0x68
    float                                    field_22; // 0x6C
    float                                    field_23; // 0x70
    float                                    field_24; // 0x74
    int32_t                                  field_25; // 0x78
    int32_t                                  field_26; // 0x7C
};

struct spColor {
    float                                    field_0; // 0x0
    float                                    field_1; // 0x4
    float                                    field_2; // 0x8
    float                                    field_3; // 0xC
};

struct spSkeleton {
    spSkeletonData*                          field_0; // 0x0
    int32_t                                  field_1; // 0x8
    spBone**                                 field_2; // 0x10
    spBone*                                  field_3; // 0x18
    int32_t                                  field_4; // 0x20
    spSlot**                                 field_5; // 0x28
    spSlot**                                 field_6; // 0x30
    int32_t                                  field_7; // 0x38
    spIkConstraint**                         field_8; // 0x40
    int32_t                                  field_9; // 0x48
    spTransformConstraint**                  field_10; // 0x50
    int32_t                                  field_11; // 0x58
    spPathConstraint**                       field_12; // 0x60
    spSkin*                                  field_13; // 0x68
    spColor                                  field_14; // 0x70
    float                                    field_15; // 0x80
    float                                    field_16; // 0x84
    float                                    field_17; // 0x88
    float                                    field_18; // 0x8C
};

struct spSkeletonClipping {
    spTriangulator*                          field_0; // 0x0
    spFloatArray*                            field_1; // 0x8
    spFloatArray*                            field_2; // 0x10
    spFloatArray*                            field_3; // 0x18
    spFloatArray*                            field_4; // 0x20
    spUnsignedShortArray*                    field_5; // 0x28
    spFloatArray*                            field_6; // 0x30
    spClippingAttachment*                    field_7; // 0x38
    spArrayFloatArray*                       field_8; // 0x40
};

struct __compressed_pair_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo_____std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ {
    HandleTemplate_mc::renderer::ShaderBufferInfo_* __value_; // 0x0
};

struct vector_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ {
    HandleTemplate_mc::renderer::ShaderBufferInfo_* __begin_; // 0x0
    HandleTemplate_mc::renderer::ShaderBufferInfo_* __end_; // 0x8
    __compressed_pair_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo_____std::allocator_mc::renderer::HandleTemplate_mc::renderer::ShaderBufferInfo___ __end_cap_; // 0x10
};

struct __compressed_pair_std::pair_unsigned_long__MCSpineNodeChild_______std::allocator_std::pair_unsigned_long__MCSpineNodeChild_____ {
    pair_unsigned_long__MCSpineNodeChild___* __value_; // 0x0
};

struct vector_std::pair_unsigned_long__MCSpineNodeChild_____std::allocator_std::pair_unsigned_long__MCSpineNodeChild_____ {
    pair_unsigned_long__MCSpineNodeChild___* __begin_; // 0x0
    pair_unsigned_long__MCSpineNodeChild___* __end_; // 0x8
    __compressed_pair_std::pair_unsigned_long__MCSpineNodeChild_______std::allocator_std::pair_unsigned_long__MCSpineNodeChild_____ __end_cap_; // 0x10
};

struct spBone_legacy {
    spBoneData_legacy*                       field_0; // 0x0
    spSkeleton_legacy*                       field_1; // 0x8
    spBone_legacy*                           field_2; // 0x10
    int32_t                                  field_3; // 0x18
    spBone_legacy**                          field_4; // 0x20
    float                                    field_5; // 0x28
    float                                    field_6; // 0x2C
    float                                    field_7; // 0x30
    float                                    field_8; // 0x34
    float                                    field_9; // 0x38
    float                                    field_10; // 0x3C
    float                                    field_11; // 0x40
    float                                    field_12; // 0x44
    float                                    field_13; // 0x48
    float                                    field_14; // 0x4C
    float                                    field_15; // 0x50
    float                                    field_16; // 0x54
    float                                    field_17; // 0x58
    float                                    field_18; // 0x5C
    int32_t                                  field_19; // 0x60
    float                                    field_20; // 0x64
    float                                    field_21; // 0x68
    float                                    field_22; // 0x6C
    float                                    field_23; // 0x70
    float                                    field_24; // 0x74
    float                                    field_25; // 0x78
    int32_t                                  field_26; // 0x7C
};

struct spColor_legacy {
    float                                    field_0; // 0x0
    float                                    field_1; // 0x4
    float                                    field_2; // 0x8
    float                                    field_3; // 0xC
};

struct spSkeleton_legacy {
    spSkeletonData_legacy*                   field_0; // 0x0
    int32_t                                  field_1; // 0x8
    spBone_legacy**                          field_2; // 0x10
    spBone_legacy*                           field_3; // 0x18
    int32_t                                  field_4; // 0x20
    spSlot_legacy**                          field_5; // 0x28
    spSlot_legacy**                          field_6; // 0x30
    int32_t                                  field_7; // 0x38
    spIkConstraint_legacy**                  field_8; // 0x40
    int32_t                                  field_9; // 0x48
    spTransformConstraint_legacy**           field_10; // 0x50
    int32_t                                  field_11; // 0x58
    spPathConstraint_legacy**                field_12; // 0x60
    spSkin_legacy*                           field_13; // 0x68
    spColor_legacy                           field_14; // 0x70
    float                                    field_15; // 0x80
    float                                    field_16; // 0x84
    float                                    field_17; // 0x88
    float                                    field_18; // 0x8C
    float                                    field_19; // 0x90
};

struct spSkeletonClipping_legacy {
    spTriangulator_legacy*                   field_0; // 0x0
    spFloatArray_legacy*                     field_1; // 0x8
    spFloatArray_legacy*                     field_2; // 0x10
    spFloatArray_legacy*                     field_3; // 0x18
    spFloatArray_legacy*                     field_4; // 0x20
    spUnsignedShortArray_legacy*             field_5; // 0x28
    spFloatArray_legacy*                     field_6; // 0x30
    spClippingAttachment_legacy*             field_7; // 0x38
    spArrayFloatArray_legacy*                field_8; // 0x40
};

struct spVertexEffect_legacy {
    void**                                   field_0; // 0x0
    void**                                   field_1; // 0x8
    void**                                   field_2; // 0x10
};

struct __value_func_void__const_std::string____ {
    type                                     __buf_; // 0x0
    __base_void__const_std::string____*      __f_; // 0x20
};

struct __value_func_void__const_std::string____unsigned_int__ {
    type                                     __buf_; // 0x0
    __base_void__const_std::string____unsigned_int__* __f_; // 0x20
};

struct function_void__const_std::string____unsigned_int__ {
    __value_func_void__const_std::string____unsigned_int__ __f_; // 0x0
};

struct AvatarFrameDTO {
    uint32_t                                 productId; // 0x0
    optional_unsigned_int_                   seasonPassRank; // 0x4
};

struct __compressed_pair_MenuShopDecalColumn_____std::allocator_MenuShopDecalColumn____ {
    id*                                      __value_; // 0x0
};

struct vector_MenuShopDecalColumn____std::allocator_MenuShopDecalColumn____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_MenuShopDecalColumn_____std::allocator_MenuShopDecalColumn____ __end_cap_; // 0x10
};

struct __compressed_pair_pool::events::EventWrapper____std::allocator_pool::events::EventWrapper__ {
    EventWrapper*                            __value_; // 0x0
};

struct vector_pool::events::EventWrapper__std::allocator_pool::events::EventWrapper__ {
    EventWrapper*                            __begin_; // 0x0
    EventWrapper*                            __end_; // 0x8
    __compressed_pair_pool::events::EventWrapper____std::allocator_pool::events::EventWrapper__ __end_cap_; // 0x10
};

struct SpectateMatchPlayerData {
    basic_string_char__std::char_traits_char___std::allocator_char__ userId; // 0x0
    basic_string_char__std::char_traits_char___std::allocator_char__ countryCode; // 0x18
    uint32_t                                 leagueId; // 0x30
    uint32_t                                 level; // 0x34
    bool                                     isFriend; // 0x38
};

struct SpectateMatchData {
    basic_string_char__std::char_traits_char___std::allocator_char__ matchId; // 0x0
    uint32_t                                 spectatorCount; // 0x18
    uint32_t                                 maxSpectatorCount; // 0x1C
    SpectateMatchPlayerData                  player1; // 0x20
    SpectateMatchPlayerData                  player2; // 0x60
    basic_string_char__std::char_traits_char___std::allocator_char__ tierCode; // 0xA0
};

struct SpectateBrowserListEntryData {
    SpectateMatchData                        matchData; // 0x0
    int32_t                                  type; // 0xB8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__SpectatorListNode_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__SpectatorListNode_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__SpectatorListNode_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__SpectatorListNode____std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__SpectatorListNode_____ {
    __hash_table_std::__hash_value_type_std::string__SpectatorListNode_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__SpectatorListNode_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__SpectatorListNode_____ __table_; // 0x0
};

struct shared_ptr_SpinBoard_ {
    SpinBoard*                               __ptr_; // 0x0
    __shared_weak_count*                     __cntrl_; // 0x8
};

struct FrictionProperties {
    MCNumber                                 _coefficientOfSlidingFriction; // 0x0
    MCNumber                                 _coefficientOfRollingFriction; // 0x8
    MCNumber                                 _coefficientOfSpinningFriction; // 0x10
    MCNumber                                 _timeOfequilibriumFactor; // 0x18
    MCNumber                                 _velocityReductionSlidingFactor; // 0x20
    MCNumber                                 _velocityReductionRollingFactor; // 0x28
    MCNumber                                 _deltaSpinFactor; // 0x30
    Table*                                   _table; // 0x38
};

struct __compressed_pair_std::shared_ptr_PhysicsArea_____std::allocator_std::shared_ptr_PhysicsArea___ {
    shared_ptr_PhysicsArea_*                 __value_; // 0x0
};

struct vector_std::shared_ptr_PhysicsArea___std::allocator_std::shared_ptr_PhysicsArea___ {
    shared_ptr_PhysicsArea_*                 __begin_; // 0x0
    shared_ptr_PhysicsArea_*                 __end_; // 0x8
    __compressed_pair_std::shared_ptr_PhysicsArea_____std::allocator_std::shared_ptr_PhysicsArea___ __end_cap_; // 0x10
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::type_index__ITableFactoryMember_____void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::type_index__std::__value_type_std::type_index__ITableFactoryMember_____std::less_std::type_index___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_std::type_index__ITableFactoryMember_____std::__map_value_compare_std::type_index__std::__value_type_std::type_index__ITableFactoryMember_____std::less_std::type_index____std::allocator_std::__value_type_std::type_index__ITableFactoryMember_____ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::type_index__ITableFactoryMember_____void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::type_index__std::__value_type_std::type_index__ITableFactoryMember_____std::less_std::type_index___ __pair3_; // 0x10
};

struct map_std::type_index__ITableFactoryMember____std::less_std::type_index___std::allocator_std::pair_const_std::type_index__ITableFactoryMember_____ {
    __tree_std::__value_type_std::type_index__ITableFactoryMember_____std::__map_value_compare_std::type_index__std::__value_type_std::type_index__ITableFactoryMember_____std::less_std::type_index____std::allocator_std::__value_type_std::type_index__ITableFactoryMember_____ __tree_; // 0x0
};

struct TableFactory {
    map_std::type_index__ITableFactoryMember____std::less_std::type_index___std::allocator_std::pair_const_std::type_index__ITableFactoryMember_____ _behaviours; // 0x0
};

struct __compressed_pair_std::shared_ptr_BallPocketCollision_____std::allocator_std::shared_ptr_BallPocketCollision___ {
    shared_ptr_BallPocketCollision_*         __value_; // 0x0
};

struct vector_std::shared_ptr_BallPocketCollision___std::allocator_std::shared_ptr_BallPocketCollision___ {
    shared_ptr_BallPocketCollision_*         __begin_; // 0x0
    shared_ptr_BallPocketCollision_*         __end_; // 0x8
    __compressed_pair_std::shared_ptr_BallPocketCollision_____std::allocator_std::shared_ptr_BallPocketCollision___ __end_cap_; // 0x10
};

struct __compressed_pair_std::shared_ptr_BallCollision_____std::allocator_std::shared_ptr_BallCollision___ {
    shared_ptr_BallCollision_*               __value_; // 0x0
};

struct vector_std::shared_ptr_BallCollision___std::allocator_std::shared_ptr_BallCollision___ {
    shared_ptr_BallCollision_*               __begin_; // 0x0
    shared_ptr_BallCollision_*               __end_; // 0x8
    __compressed_pair_std::shared_ptr_BallCollision_____std::allocator_std::shared_ptr_BallCollision___ __end_cap_; // 0x10
};

struct __compressed_pair_std::shared_ptr_BallBallCollision_____std::allocator_std::shared_ptr_BallBallCollision___ {
    shared_ptr_BallBallCollision_*           __value_; // 0x0
};

struct vector_std::shared_ptr_BallBallCollision___std::allocator_std::shared_ptr_BallBallCollision___ {
    shared_ptr_BallBallCollision_*           __begin_; // 0x0
    shared_ptr_BallBallCollision_*           __end_; // 0x8
    __compressed_pair_std::shared_ptr_BallBallCollision_____std::allocator_std::shared_ptr_BallBallCollision___ __end_cap_; // 0x10
};

struct __list_node_base_ClearShotAnalyzer::ScanData__void___ {
    __list_node_base_ClearShotAnalyzer::ScanData__void___* __prev_; // 0x0
    __list_node_base_ClearShotAnalyzer::ScanData__void___* __next_; // 0x8
};

struct __compressed_pair_unsigned_long__std::allocator_std::__list_node_ClearShotAnalyzer::ScanData__void_____ {
    uint64_t                                 __value_; // 0x0
};

struct list_ClearShotAnalyzer::ScanData__std::allocator_ClearShotAnalyzer::ScanData__ {
    __list_node_base_ClearShotAnalyzer::ScanData__void___ __end_; // 0x0
    __compressed_pair_unsigned_long__std::allocator_std::__list_node_ClearShotAnalyzer::ScanData__void_____ __size_alloc_; // 0x10
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void________std::allocator_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_int__std::__hash_value_type_int__MCNumberPoint___std::hash_int___std::equal_to_int___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_int__std::__hash_value_type_int__MCNumberPoint___std::equal_to_int___std::hash_int___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_int__MCNumberPoint___std::__unordered_map_hasher_int__std::__hash_value_type_int__MCNumberPoint___std::hash_int___std::equal_to_int____std::__unordered_map_equal_int__std::__hash_value_type_int__MCNumberPoint___std::equal_to_int___std::hash_int____std::allocator_std::__hash_value_type_int__MCNumberPoint___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void________std::allocator_std::__hash_node_std::__hash_value_type_int__MCNumberPoint___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_int__std::__hash_value_type_int__MCNumberPoint___std::hash_int___std::equal_to_int___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_int__std::__hash_value_type_int__MCNumberPoint___std::equal_to_int___std::hash_int___ __p3_; // 0x20
};

struct unordered_map_int__MCNumberPoint__std::hash_int___std::equal_to_int___std::allocator_std::pair_const_int__MCNumberPoint___ {
    __hash_table_std::__hash_value_type_int__MCNumberPoint___std::__unordered_map_hasher_int__std::__hash_value_type_int__MCNumberPoint___std::hash_int___std::equal_to_int____std::__unordered_map_equal_int__std::__hash_value_type_int__MCNumberPoint___std::equal_to_int___std::hash_int____std::allocator_std::__hash_value_type_int__MCNumberPoint___ __table_; // 0x0
};

struct __compressed_pair_ClearShotAnalyzer::CushionLine____std::allocator_ClearShotAnalyzer::CushionLine__ {
    CushionLine*                             __value_; // 0x0
};

struct vector_ClearShotAnalyzer::CushionLine__std::allocator_ClearShotAnalyzer::CushionLine__ {
    CushionLine*                             __begin_; // 0x0
    CushionLine*                             __end_; // 0x8
    __compressed_pair_ClearShotAnalyzer::CushionLine____std::allocator_ClearShotAnalyzer::CushionLine__ __end_cap_; // 0x10
};

struct TableSnapshot {
    unordered_map_int__MCNumberPoint__std::hash_int___std::equal_to_int___std::allocator_std::pair_const_int__MCNumberPoint___ inPlayBallPositions; // 0x0
    vector_MCNumberPoint__std::allocator_MCNumberPoint__ pocketPositions; // 0x28
    vector_ClearShotAnalyzer::CushionLine__std::allocator_ClearShotAnalyzer::CushionLine__ tableCushions; // 0x40
};

struct ClearShotAnalyzer {
    list_ClearShotAnalyzer::ScanData__std::allocator_ClearShotAnalyzer::ScanData__ _latestScanData; // 0x0
    ScanData*                                _cueToTargetBallScanData; // 0x18
    TableSnapshot                            _tableSnapshot; // 0x20
    int32_t                                  _targetBallNumber; // 0x78
    int32_t                                  _cueBallNumber; // 0x7C
    bool                                     _needsAnalysis; // 0x80
    MCNumber                                 _ballRadius; // 0x88
};

struct ShotResults {
    vector_std::shared_ptr_BallPocketCollision___std::allocator_std::shared_ptr_BallPocketCollision___ _pocketCollisions; // 0x0
    vector_std::shared_ptr_BallCollision___std::allocator_std::shared_ptr_BallCollision___ _cushionCollisions; // 0x18
    vector_std::shared_ptr_BallBallCollision___std::allocator_std::shared_ptr_BallBallCollision___ _ballCollisions; // 0x30
    bool                                     _validCushionShot; // 0x48
    Ball*                                    _cushionShotBall; // 0x50
    ClearShotAnalyzer                        _clearShotAnalyzer; // 0x58
};

struct __compressed_pair_std::shared_ptr_Collision_____std::allocator_std::shared_ptr_Collision___ {
    shared_ptr_Collision_*                   __value_; // 0x0
};

struct vector_std::shared_ptr_Collision___std::allocator_std::shared_ptr_Collision___ {
    shared_ptr_Collision_*                   __begin_; // 0x0
    shared_ptr_Collision_*                   __end_; // 0x8
    __compressed_pair_std::shared_ptr_Collision_____std::allocator_std::shared_ptr_Collision___ __end_cap_; // 0x10
};

struct __compressed_pair_std::pair_short__short_____std::allocator_std::pair_short__short___ {
    pair_short__short_*                      __value_; // 0x0
};

struct vector_std::pair_short__short___std::allocator_std::pair_short__short___ {
    pair_short__short_*                      __begin_; // 0x0
    pair_short__short_*                      __end_; // 0x8
    __compressed_pair_std::pair_short__short_____std::allocator_std::pair_short__short___ __end_cap_; // 0x10
};

struct __compressed_pair_short____std::allocator_short__ {
    int16_t*                                 __value_; // 0x0
};

struct vector_short__std::allocator_short__ {
    int16_t*                                 __begin_; // 0x0
    int16_t*                                 __end_; // 0x8
    __compressed_pair_short____std::allocator_short__ __end_cap_; // 0x10
};

struct TableViewScrollAnimationParameters {
    float                                    totalAnimationTimeInSeconds; // 0x0
    float                                    currentAnimationTimeInSeconds; // 0x4
    float                                    initialCellToScrollFrom; // 0x8
    float                                    finalCellToScrollTo; // 0xC
};

struct __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__pool::transaction::AccessDTO___void_____ {
    __tree_end_node_std::__tree_node_base_void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__pool::transaction::AccessDTO___std::less_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __tree_std::__value_type_std::string__pool::transaction::AccessDTO___std::__map_value_compare_std::string__std::__value_type_std::string__pool::transaction::AccessDTO___std::less_std::string____std::allocator_std::__value_type_std::string__pool::transaction::AccessDTO___ {
    __tree_end_node_std::__tree_node_base_void______* __begin_node_; // 0x0
    __compressed_pair_std::__tree_end_node_std::__tree_node_base_void________std::allocator_std::__tree_node_std::__value_type_std::string__pool::transaction::AccessDTO___void_____ __pair1_; // 0x8
    __compressed_pair_unsigned_long__std::__map_value_compare_std::string__std::__value_type_std::string__pool::transaction::AccessDTO___std::less_std::string___ __pair3_; // 0x10
};

struct map_std::string__pool::transaction::AccessDTO__std::less_std::string___std::allocator_std::pair_const_std::string__pool::transaction::AccessDTO___ {
    __tree_std::__value_type_std::string__pool::transaction::AccessDTO___std::__map_value_compare_std::string__std::__value_type_std::string__pool::transaction::AccessDTO___std::less_std::string____std::allocator_std::__value_type_std::string__pool::transaction::AccessDTO___ __tree_; // 0x0
};

struct TransactionFilterSelection {
    bool                                     hideTransactionsBeforeTheirStartTime; // 0x0
    bool                                     hideTransactionsAfterTheirEndTime; // 0x1
    bool                                     hideTransactionsWithOwnedUniqueProducts; // 0x2
    bool                                     hideTransactionsWithNoMoreClaimsAvailable; // 0x3
    bool                                     hideTransactionsWithoutExpiryTime; // 0x4
    bool                                     hideVideoAdTransactions; // 0x5
};

struct __compressed_pair_ShopItem____std::allocator_ShopItem__ {
    ShopItem*                                __value_; // 0x0
};

struct vector_ShopItem__std::allocator_ShopItem__ {
    ShopItem*                                __begin_; // 0x0
    ShopItem*                                __end_; // 0x8
    __compressed_pair_ShopItem____std::allocator_ShopItem__ __end_cap_; // 0x10
};

struct __compressed_pair_std::shared_ptr_ObjCWrapper_____std::allocator_std::shared_ptr_ObjCWrapper___ {
    shared_ptr_ObjCWrapper_*                 __value_; // 0x0
};

struct vector_std::shared_ptr_ObjCWrapper___std::allocator_std::shared_ptr_ObjCWrapper___ {
    shared_ptr_ObjCWrapper_*                 __begin_; // 0x0
    shared_ptr_ObjCWrapper_*                 __end_; // 0x8
    __compressed_pair_std::shared_ptr_ObjCWrapper_____std::allocator_std::shared_ptr_ObjCWrapper___ __end_cap_; // 0x10
};

struct __value_func_void__const_std::map_std::string__pool::transaction::AccessDTO_____ {
    type                                     __buf_; // 0x0
    __base_void__const_std::map_std::string__pool::transaction::AccessDTO_____* __f_; // 0x20
};

struct function_void__const_std::map_std::string__pool::transaction::AccessDTO_____ {
    __value_func_void__const_std::map_std::string__pool::transaction::AccessDTO_____ __f_; // 0x0
};

struct __compressed_pair_pool::transaction::AccessDTO____std::default_delete_pool::transaction::AccessDTO__ {
    AccessDTO*                               __value_; // 0x0
};

struct unique_ptr_pool::transaction::AccessDTO__std::default_delete_pool::transaction::AccessDTO__ {
    __compressed_pair_pool::transaction::AccessDTO____std::default_delete_pool::transaction::AccessDTO__ __ptr_; // 0x0
};

struct Optional_pool::transaction::AccessDTO_ {
    unique_ptr_pool::transaction::AccessDTO__std::default_delete_pool::transaction::AccessDTO__ _t; // 0x0
};

struct Tier {
    basic_string_char__std::char_traits_char___std::allocator_char__ code; // 0x0
};

struct League {
    int32_t                                  id; // 0x0
};

struct TrophyRoadShortcut {
    int32_t                                  shortcutType; // 0x0
    float                                    jumpCellIndex; // 0x4
};

struct ProgressBarAnimationData {
    int32_t                                  maxNumberOfTrophiesAchieved; // 0x0
    int32_t                                  currentNumberOfTrophies; // 0x4
    int32_t                                  currentCellIndex; // 0x8
    int32_t                                  currentAnimatedTrophies; // 0xC
    int32_t                                  nextAnimatedTrophies; // 0x10
    int32_t                                  minimumValue; // 0x14
    int32_t                                  maximumValue; // 0x18
    int32_t                                  delta; // 0x1C
    bool                                     isAnimating; // 0x20
    bool                                     doScrollAnimation; // 0x21
};

struct anon_cfa84e {
    uint32_t                                 _firstTouchForView : 1; // 0x0
    uint32_t                                 _isTap : 1; // 0x0
    uint32_t                                 _isWarped : 1; // 0x0
    uint32_t                                 _isDelayed : 1; // 0x0
    uint32_t                                 _sentTouchesEnded : 1; // 0x0
};

struct __compressed_pair_leaderboard_entry____std::allocator_leaderboard_entry__ {
    leaderboard_entry*                       __value_; // 0x0
};

struct vector_leaderboard_entry__std::allocator_leaderboard_entry__ {
    leaderboard_entry*                       __begin_; // 0x0
    leaderboard_entry*                       __end_; // 0x8
    __compressed_pair_leaderboard_entry____std::allocator_leaderboard_entry__ __end_cap_; // 0x10
};

struct UserNotificationInfo {
    int32_t                                  _totalMenuGameTypeVisits; // 0x0
    bool                                     _pendingOnceThisSession; // 0x4
    bool                                     _shownOnceThisSession; // 0x5
    bool                                     _wonOnceThisSession; // 0x6
    bool                                     _isOnChallengeFlow; // 0x7
};

struct VIPInfo {
    uint32_t                                 tier; // 0x0
    uint32_t                                 points; // 0x4
    int8_t                                   userMigrated; // 0x8
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__UserChampionshipInfo_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__UserChampionshipInfo_____ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__UserChampionshipInfo_____void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__UserChampionshipInfo____std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__UserChampionshipInfo_____ {
    __hash_table_std::__hash_value_type_std::string__UserChampionshipInfo_____std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__UserChampionshipInfo_____std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__UserChampionshipInfo_____ __table_; // 0x0
};

struct ChampionshipTickets {
    unordered_map_std::string__unsigned_int__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__unsigned_int___ _entryTickets; // 0x0
    unordered_map_std::string__unsigned_int__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__unsigned_int___ _streakTickets; // 0x28
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_long___std::hash_std::string___std::equal_to_std::string___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_long___std::equal_to_std::string___std::hash_std::string___ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_std::string__unsigned_long___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_long___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_long___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__unsigned_long___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void________std::allocator_std::__hash_node_std::__hash_value_type_std::string__unsigned_long___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_long___std::hash_std::string___std::equal_to_std::string___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_long___std::equal_to_std::string___std::hash_std::string___ __p3_; // 0x20
};

struct unordered_map_std::string__unsigned_long__std::hash_std::string___std::equal_to_std::string___std::allocator_std::pair_const_std::string__unsigned_long___ {
    __hash_table_std::__hash_value_type_std::string__unsigned_long___std::__unordered_map_hasher_std::string__std::__hash_value_type_std::string__unsigned_long___std::hash_std::string___std::equal_to_std::string____std::__unordered_map_equal_std::string__std::__hash_value_type_std::string__unsigned_long___std::equal_to_std::string___std::hash_std::string____std::allocator_std::__hash_value_type_std::string__unsigned_long___ __table_; // 0x0
};

struct __hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void______ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void______* __next_; // 0x0
};

struct __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void__________ {
    uint64_t                                 __value_; // 0x0
};

struct __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void__________ {
    __compressed_pair_unsigned_long__std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void__________ __data_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void___________ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void______** __value_; // 0x0
    __bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void__________ __value_; // 0x8
};

struct unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void___________ {
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void___________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void___________ __ptr_; // 0x0
};

struct __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void________std::allocator_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void_____ {
    __hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void______ __value_; // 0x0
};

struct __compressed_pair_unsigned_long__std::__unordered_map_hasher_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___EnumClassHash__std::equal_to_OtherProductType___ {
    uint64_t                                 __value_; // 0x0
};

struct __compressed_pair_float__std::__unordered_map_equal_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___std::equal_to_OtherProductType___EnumClassHash__ {
    float                                    __value_; // 0x0
};

struct __hash_table_std::__hash_value_type_OtherProductType__unsigned_long___std::__unordered_map_hasher_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___EnumClassHash__std::equal_to_OtherProductType____std::__unordered_map_equal_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___std::equal_to_OtherProductType___EnumClassHash___std::allocator_std::__hash_value_type_OtherProductType__unsigned_long___ {
    unique_ptr_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void____________std::__bucket_list_deallocator_std::allocator_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void___________ __bucket_list_; // 0x0
    __compressed_pair_std::__hash_node_base_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void________std::allocator_std::__hash_node_std::__hash_value_type_OtherProductType__unsigned_long___void_____ __p1_; // 0x10
    __compressed_pair_unsigned_long__std::__unordered_map_hasher_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___EnumClassHash__std::equal_to_OtherProductType___ __p2_; // 0x18
    __compressed_pair_float__std::__unordered_map_equal_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___std::equal_to_OtherProductType___EnumClassHash__ __p3_; // 0x20
};

struct unordered_map_OtherProductType__unsigned_long__EnumClassHash__std::equal_to_OtherProductType___std::allocator_std::pair_const_OtherProductType__unsigned_long___ {
    __hash_table_std::__hash_value_type_OtherProductType__unsigned_long___std::__unordered_map_hasher_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___EnumClassHash__std::equal_to_OtherProductType____std::__unordered_map_equal_OtherProductType__std::__hash_value_type_OtherProductType__unsigned_long___std::equal_to_OtherProductType___EnumClassHash___std::allocator_std::__hash_value_type_OtherProductType__unsigned_long___ __table_; // 0x0
};

struct anon_3731fe {
    uint32_t                                 hours; // 0x0
    uint32_t                                 minutes; // 0x4
    uint32_t                                 sec; // 0x8
    uint32_t                                 wholeTimeInSec; // 0xC
};

struct anon_c57c49 {
    uint32_t                                 days; // 0x0
    uint32_t                                 hours; // 0x4
    uint32_t                                 minutes; // 0x8
    uint32_t                                 sec; // 0xC
    uint32_t                                 wholeTimeInSec; // 0x10
};

struct SurpriseBoxesUpsellPopupConditions {
    int32_t                                  cueProductIdToShow; // 0x0
    int32_t                                  resetCounter; // 0x4
    bool                                     hasSeenThisSession; // 0x8
    bool                                     guaranteedToShowThisSession; // 0x9
    bool                                     hasOpenedMinigamesMenuManually; // 0xA
    bool                                     hasReceivedCashBeforeMenuGameType; // 0xB
    bool                                     hasSetCashForTheFirstTime; // 0xC
};

struct VictoryBoxesSpeechBubblesConditions {
    int32_t                                  boxBubblesDuration; // 0x0
    int32_t                                  boxBubblesPerSession; // 0x4
    int32_t                                  boxBubblesShownThisSession; // 0x8
};

struct __compressed_pair_VictoryBoxContentDetailsInfoEntry____std::allocator_VictoryBoxContentDetailsInfoEntry__ {
    VictoryBoxContentDetailsInfoEntry*       __value_; // 0x0
};

struct vector_VictoryBoxContentDetailsInfoEntry__std::allocator_VictoryBoxContentDetailsInfoEntry__ {
    VictoryBoxContentDetailsInfoEntry*       __begin_; // 0x0
    VictoryBoxContentDetailsInfoEntry*       __end_; // 0x8
    __compressed_pair_VictoryBoxContentDetailsInfoEntry____std::allocator_VictoryBoxContentDetailsInfoEntry__ __end_cap_; // 0x10
};

struct VictoryBoxContentDetailsInfo {
    bool                                     hasCoins; // 0x0
    bool                                     hasCuePieces; // 0x1
    bool                                     hasCollectionItems; // 0x2
    vector_VictoryBoxContentDetailsInfoEntry__std::allocator_VictoryBoxContentDetailsInfoEntry__ entries; // 0x8
};

struct __value_func_unsigned_short____ {
    type                                     __buf_; // 0x0
    __base_unsigned_short____*               __f_; // 0x20
};

struct function_unsigned_short____ {
    __value_func_unsigned_short____          __f_; // 0x0
};

struct CounterColoursValueFunctions {
    function_unsigned_short____              redFunction; // 0x0
    function_unsigned_short____              yellowFunction; // 0x28
    function_unsigned_short____              greenFunction; // 0x50
};

struct __compressed_pair_MCNumber____std::allocator_MCNumber__ {
    MCNumber*                                __value_; // 0x0
};

struct vector_MCNumber__std::allocator_MCNumber__ {
    MCNumber*                                __begin_; // 0x0
    MCNumber*                                __end_; // 0x8
    __compressed_pair_MCNumber____std::allocator_MCNumber__ __end_cap_; // 0x10
};

struct __compressed_pair_WinStreakLoseNode_____std::allocator_WinStreakLoseNode____ {
    id*                                      __value_; // 0x0
};

struct vector_WinStreakLoseNode____std::allocator_WinStreakLoseNode____ {
    id*                                      __begin_; // 0x0
    id*                                      __end_; // 0x8
    __compressed_pair_WinStreakLoseNode_____std::allocator_WinStreakLoseNode____ __end_cap_; // 0x10
};

