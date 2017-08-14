

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct $B8B9B85B971E3DBFC31707A9282CDA9E;
struct NSString;
struct YLUMusicQueue;
struct YLUNowPlayingInterfaceView;
struct YLUAudioTrack;
struct $71210C31999B47ECFCA79A4496892A9D;

/* 3 */
typedef unsigned int u_int32_t;

/* 2 */
typedef u_int32_t uint32_t;

/* 5 */
typedef int integer_t;

/* 4 */
typedef integer_t cpu_type_t;

/* 6 */
typedef integer_t cpu_subtype_t;

/* 1 */
struct mach_header
{
  uint32_t magic;
  cpu_type_t cputype;
  cpu_subtype_t cpusubtype;
  uint32_t filetype;
  uint32_t ncmds;
  uint32_t sizeofcmds;
  uint32_t flags;
};

/* 7 */
typedef $B8B9B85B971E3DBFC31707A9282CDA9E NDR_record_t;

/* 8 */
struct $B8B9B85B971E3DBFC31707A9282CDA9E
{
  unsigned __int8 mig_vers;
  unsigned __int8 if_vers;
  unsigned __int8 reserved1;
  unsigned __int8 mig_encoding;
  unsigned __int8 int_rep;
  unsigned __int8 char_rep;
  unsigned __int8 float_rep;
  unsigned __int8 reserved2;
};

/* 9 */
struct __CFString
{
  void *isa;
  __int32 info;
  char *data;
  __int32 length;
};

/* 11 */
typedef int vm_prot_t;

/* 10 */
struct __attribute__((aligned(4))) segment_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  char segname[16];
  uint32_t vmaddr;
  uint32_t vmsize;
  uint32_t fileoff;
  uint32_t filesize;
  vm_prot_t maxprot;
  vm_prot_t initprot;
  uint32_t nsects;
  uint32_t flags;
};

/* 12 */
struct __attribute__((aligned(4))) section
{
  char sectname[16];
  char segname[16];
  uint32_t addr;
  uint32_t size;
  uint32_t offset;
  uint32_t align;
  uint32_t reloff;
  uint32_t nreloc;
  uint32_t flags;
  uint32_t reserved1;
  uint32_t reserved2;
};

/* 13 */
struct dyld_info_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t rebase_off;
  uint32_t rebase_size;
  uint32_t bind_off;
  uint32_t bind_size;
  uint32_t weak_bind_off;
  uint32_t weak_bind_size;
  uint32_t lazy_bind_off;
  uint32_t lazy_bind_size;
  uint32_t export_off;
  uint32_t export_size;
};

/* 14 */
struct symtab_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t symoff;
  uint32_t nsyms;
  uint32_t stroff;
  uint32_t strsize;
};

/* 15 */
struct dysymtab_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t ilocalsym;
  uint32_t nlocalsym;
  uint32_t iextdefsym;
  uint32_t nextdefsym;
  uint32_t iundefsym;
  uint32_t nundefsym;
  uint32_t tocoff;
  uint32_t ntoc;
  uint32_t modtaboff;
  uint32_t nmodtab;
  uint32_t extrefsymoff;
  uint32_t nextrefsyms;
  uint32_t indirectsymoff;
  uint32_t nindirectsyms;
  uint32_t extreloff;
  uint32_t nextrel;
  uint32_t locreloff;
  uint32_t nlocrel;
};

/* 17 */
union lc_str
{
  uint32_t offset;
  char *ptr;
};

/* 16 */
struct dylinker_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  lc_str name;
};

/* 20 */
typedef unsigned __int8 u_int8_t;

/* 19 */
typedef u_int8_t uint8_t;

/* 18 */
struct uuid_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint8_t uuid[16];
};

/* 21 */
struct version_min_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t version;
  uint32_t reserved;
};

/* 22 */
struct source_version_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint64_t version;
};

/* 23 */
struct entry_point_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint64_t entryoff;
  uint64_t stacksize;
};

/* 24 */
struct encryption_info_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t cryptoff;
  uint32_t cryptsize;
  uint32_t cryptid;
};

/* 26 */
struct dylib
{
  lc_str name;
  uint32_t timestamp;
  uint32_t current_version;
  uint32_t compatibility_version;
};

/* 25 */
struct dylib_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  dylib dylib;
};

/* 27 */
struct rpath_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  union lc_str path;
};

/* 28 */
struct linkedit_data_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t dataoff;
  uint32_t datasize;
};

/* 29 */
struct __objc2_prop
{
  char *name;
  char *attr;
};

/* 30 */
struct __objc2_prop_list
{
  uint32_t entrysize;
  uint32_t count;
};

/* 31 */
struct __objc2_meth
{
  char *name;
  char *types;
  void *imp;
};

/* 32 */
struct __objc2_meth_list
{
  uint32_t entrysize;
  uint32_t count;
};

/* 33 */
struct __objc2_ivar
{
  void *ptr;
  char *name;
  char *type;
  uint32_t align;
  uint32_t size;
};

/* 34 */
struct __objc2_ivar_list
{
  uint32_t entrysize;
  uint32_t count;
};

/* 35 */
struct __objc2_prot_list
{
  uint32_t count;
};

/* 36 */
struct __objc2_prot
{
  void *isa;
  char *name;
  __objc2_prot_list *prots;
  __objc2_meth_list *inst_meths;
  __objc2_meth_list *class_meths;
  __objc2_meth_list *opt_inst_meths;
  __objc2_meth_list *opt_class_meths;
  __objc2_prop_list *inst_props;
};

/* 37 */
struct __objc2_class_ro
{
  uint32_t flags;
  uint32_t ivar_base_start;
  uint32_t ivar_base_size;
  void *ivar_lyt;
  char *name;
  __objc2_meth_list *base_meths;
  __objc2_prot_list *base_prots;
  __objc2_ivar_list *ivars;
  void *weak_ivar_lyt;
  __objc2_prop_list *base_props;
};

/* 38 */
struct __objc2_category
{
  char *name;
  __objc2_class_ro *_class;
  __objc2_meth_list *inst_meths;
  __objc2_meth_list *class_meths;
  __objc2_prot_list *prots;
  __objc2_prop_list *props;
};

/* 39 */
struct __objc2_class
{
  __objc2_class *isa;
  __objc2_class *superclass;
  void *cache;
  void *vtable;
  __objc2_class_ro *info;
};

/* 40 */
struct __NSObject
{
  void *dummy;
};

/* 41 */
typedef struct __NSObject NSObject;

/* 42 */
struct __NSString
{
  void *dummy;
};

/* 43 */
typedef struct __NSString NSString;

/* 44 */
struct __NSThread
{
  void *dummy;
};

/* 45 */
typedef struct __NSThread NSThread;

/* 46 */
typedef void *SEL;

/* 47 */
typedef void *Class;

/* 48 */
struct objc_object
{
  Class isa;
};

/* 49 */
typedef struct objc_object *id;

/* 50 */
struct YLULauncherViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 51 */
struct YLULauncherViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *helloLabel;
  struct UILabel *deviceDescriptionLabel;
  struct UIButton *beginButton;
  struct UIButton *mixtapeButton;
  struct UITextView *termsTextView;
  struct NSLayoutConstraint *helloLabelInitialCenterYConstraint;
  struct NSLayoutConstraint *helloLabelTermsCenterYConstraint;
  unsigned int deviceState;
  unsigned int transferredTracks;
  unsigned int displayState;
  struct AVAudioPlayer *_player;
};

/* 52 */
struct UILabel;

/* 53 */
struct UIButton;

/* 54 */
struct UITextView;

/* 55 */
struct NSLayoutConstraint;

/* 56 */
struct AVAudioPlayer;

/* 57 */
struct YLUMixtapeViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 58 */
struct YLUMixtapeViewController
{
  uint8_t UIViewController_opaque[4];
  struct UIImageView *coverImageView;
  struct UIButton *downloadButton;
  struct UILabel *titleLabel;
  struct UIButton *skipButton;
  struct UILabel *mixtapeLabel;
  struct UILabel *mixtapeDescriptionLabel;
  struct UIImageView *spinrillaLogoImageView;
  char mixtapeIsDownloaded;
};

/* 59 */
struct UIImageView;

/* 60 */
struct CGPoint
{
  float var0;
  float var1;
};

/* 61 */
struct _NSRange
{
  unsigned int var0;
  unsigned int var1;
};

/* 62 */
struct HDPEnterOffsetsViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 63 */
struct HDPEnterOffsetsViewController
{
  uint8_t UIViewController_opaque[4];
  struct UITextView *offsetsTextView;
  struct UIButton *pasteButton;
  struct UILabel *titleLabel;
  id delegate;
};

/* 64 */
struct HDPCydiaManager_meta
{
  uint8_t NSObject_meta_opaque[20];
};

/* 65 */
struct HDPCydiaManager
{
  uint8_t NSObject_opaque[4];
};

/* 66 */
struct SSZipArchive_meta
{
  uint8_t NSObject_meta_opaque[20];
};

/* 67 */
struct tm_zip_s
{
  unsigned int var0;
  unsigned int var1;
  unsigned int var2;
  unsigned int var3;
  unsigned int var4;
  unsigned int var5;
};

/* 68 */
struct anon_struct_0
{
  struct tm_zip_s var0;
  unsigned int var1;
  unsigned int var2;
  unsigned int var3;
};

/* 69 */
struct SSZipArchive
{
  uint8_t NSObject_opaque[4];
  struct NSString *_path;
  struct NSString *_filename;
  void *_zip;
};

/* 70 */
struct YLUCaptchaViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 71 */
struct YLUCaptchaViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *titleLabel;
  struct WKWebView *downloadPromptWebView;
  id sender;
};

/* 72 */
struct WKWebView;

/* 73 */
struct YLUInitialViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 74 */
struct YLUInitialViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *helloLabel;
  struct UIButton *beginButton;
  struct UITextView *termsTextView;
  struct NSLayoutConstraint *helloLabelInitialCenterYConstraint;
  struct NSLayoutConstraint *helloLabelTermsCenterYConstraint;
};

/* 75 */
struct unz_global_info_s
{
  uint32_t var0;
  uint32_t var1;
  uint32_t var2;
};

/* 76 */
struct tm_unz_s
{
  unsigned int var0;
  unsigned int var1;
  unsigned int var2;
  unsigned int var3;
  unsigned int var4;
  unsigned int var5;
};

/* 77 */
struct unz_file_info_s
{
  uint32_t var0;
  uint32_t var1;
  uint32_t var2;
  uint32_t var3;
  uint32_t var4;
  uint32_t var5;
  uint32_t var6;
  uint32_t var7;
  uint32_t var8;
  uint32_t var9;
  uint32_t var10;
  uint32_t var11;
  uint32_t var12;
  uint32_t var13;
  struct tm_unz_s var14;
};

/* 78 */
struct YLUDownloadViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 79 */
struct YLUDownloadViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *titleLabel;
  struct UIActivityIndicatorView *downloadActivityIndicator;
  struct UILabel *downloadDescriptionLabel;
  struct NSURL *downloadURL;
  int64_t expectedContentLength;
  int64_t writtenBytes;
  struct NSTimer *updateProgressTimer;
};

/* 80 */
struct UIActivityIndicatorView;

/* 81 */
struct NSURL;

/* 82 */
struct NSTimer;

/* 83 */
struct YLUEnableCydiaViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 84 */
struct YLUEnableCydiaViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *titleLabel;
  struct UIActivityIndicatorView *activityIndicator;
  struct UILabel *enableCydiaDescriptionLabel;
  struct NSArray *customOffsets;
  struct NSDictionary *credentials;
};

/* 85 */
struct NSArray;

/* 86 */
struct NSDictionary;

/* 87 */
struct CGSize
{
  float var0;
  float var1;
};

/* 88 */
struct CGRect
{
  struct CGPoint var0;
  struct CGSize var1;
};

/* 89 */
struct AppDelegate_meta
{
  uint8_t UIResponder_meta_opaque[20];
};

/* 90 */
struct AppDelegate
{
  uint8_t UIResponder_opaque[4];
  struct UIWindow *_window;
  struct YLUMusicQueue *_sharedMusicQueue;
};

/* 91 */
struct UIWindow;

/* 112 */
struct anon_struct_1
{
  int64_t value;
  int timescale;
  unsigned int flags;
  int64_t epoch;
};

/* 92 */
struct YLUMusicQueue
{
  uint8_t NSObject_opaque[4];
  struct NSArray *tracks;
  int currentIndex;
  struct NSArray *upNext;
  struct NSArray *upPrevious;
  struct anon_struct_1 currentTime;
  char isPlaying;
  char _shuffleEnabled;
  struct AVQueuePlayer *_player;
  id _delegate;
  unsigned int _repeatMode;
};

/* 93 */
struct exploit_meta
{
  uint8_t NSObject_meta_opaque[20];
};

/* 94 */
struct exploit
{
  uint8_t NSObject_opaque[4];
};

/* 95 */
struct YLUOpenInActivity_meta
{
  uint8_t UIActivity_meta_opaque[20];
};

/* 96 */
struct YLUOpenInActivity
{
  uint8_t UIActivity_opaque[4];
  struct NSURL *URLToOpen;
  unsigned int kind;
};

/* 97 */
struct YLUJailbreakViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 98 */
struct YLUJailbreakViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *titleLabel;
  struct UIActivityIndicatorView *activityIndicator;
  struct UILabel *jailbreakDescriptionLabel;
  struct UIButton *beginButton;
  struct UITextView *logTextView;
  char jailbreakSupportsLog;
  struct NSArray *customOffsets;
};

/* 99 */
struct UIEdgeInsets
{
  float var0;
  float var1;
  float var2;
  float var3;
};

/* 100 */
struct YLUNowPlayingViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 101 */
struct YLUNowPlayingViewController
{
  uint8_t UIViewController_opaque[4];
  struct YLUMusicQueue *queue;
  struct YLUNowPlayingInterfaceView *interfaceView;
  struct UICollectionView *nowPlayingCollectionView;
  struct UILabel *titleLabel;
  struct UIVisualEffectView *statusBarVisualEffectView;
  struct UITableView *upNextTableView;
  float interfaceHeight;
  struct UITextView *lyricsTextView;
  struct UILabel *lyricsLabel;
  struct UIActivityIndicatorView *lyricsActivityIndicatorView;
  float lyricsHeight;
  struct NSAttributedString *lyrics;
  unsigned int displayState;
};

/* 102 */
struct YLUNowPlayingInterfaceView
{
  uint8_t UIView_opaque[4];
  struct YLUAudioTrack *currentTrack;
  struct UIImageView *coverImageView;
  struct UILabel *titleLabel;
  struct UILabel *subtitleLabel;
  struct UIButton *nextButton;
  struct UIButton *previousButton;
  struct UIButton *playButton;
  struct UISlider *volumeSlider;
  struct UIButton *shuffleButton;
  struct UIButton *repeatButton;
  struct UIImageView *shuffleOverlayImageView;
  struct UIImageView *repeatOverlayImageView;
  struct UIProgressView *trackCompletionProgressView;
  struct UILabel *currentTimeLabel;
  struct UILabel *durationLabel;
  struct UIImageView *scrubbingKnobImageView;
  struct NSLayoutConstraint *scrubbingKnobLeadingConstraint;
  float scrubbingKnobLeftOffset;
  struct UIPanGestureRecognizer *scrubbingPanGestureRecognizer;
  char isPlayingMusic;
  char shuffleEnabled;
  unsigned int repeatMode;
  float constantMultiplier;
  struct YLUMusicQueue *queue;
  unsigned int displayState;
  char skipUpdatingCompletionProgressView;
};

/* 103 */
struct UICollectionView;

/* 104 */
struct UIVisualEffectView;

/* 105 */
struct UITableView;

/* 106 */
struct NSAttributedString;

/* 107 */
struct YLUTrackCellView_meta
{
  uint8_t UIView_meta_opaque[20];
};

/* 108 */
struct YLUTrackCellView
{
  uint8_t UIView_opaque[4];
  struct UILabel *shuffleAllLabel;
  struct UIImageView *coverImageView;
  struct UILabel *trackNumberLabel;
  struct UILabel *titleLabel;
  struct UILabel *artistLabel;
  struct UILabel *lengthLabel;
  unsigned int displayState;
};

/* 109 */
struct YLUMixtapeLibraryViewController_meta
{
  uint8_t UIViewController_meta_opaque[20];
};

/* 110 */
struct YLUMixtapeLibraryViewController
{
  uint8_t UIViewController_opaque[4];
  struct UILabel *titleLabel;
  struct UITableView *trackListTableView;
  struct UIVisualEffectView *statusBarVisualEffectView;
  struct NSArray *tracks;
  unsigned int displayState;
};

/* 111 */
struct YLUMusicQueue_meta
{
  uint8_t NSObject_meta_opaque[20];
};

/* 113 */
struct AVQueuePlayer;

/* 114 */
struct YLUAudioTrack_meta
{
  uint8_t NSObject_meta_opaque[20];
};

/* 115 */
struct YLUAudioTrack
{
  uint8_t NSObject_opaque[4];
  struct NSString *_title;
  struct NSString *_artist;
  struct NSString *_album;
  struct UIImage *_artwork;
  struct NSString *_trackDurationString;
  unsigned int _trackNumber;
  struct NSString *_trackNumberString;
  struct AVAsset *_asset;
  struct NSDictionary *_nowPlayingInfo;
  struct NSDictionary *_metadata;
  double _trackDuration;
};

/* 116 */
struct UIImage;

/* 117 */
struct AVAsset;

/* 118 */
struct YLUNowPlayingInterfaceView_meta
{
  uint8_t UIView_meta_opaque[20];
};

/* 119 */
struct UISlider;

/* 120 */
struct UIProgressView;

/* 121 */
struct UIPanGestureRecognizer;

/* 122 */
struct mach_timebase_info
{
  uint32_t numer;
  uint32_t denom;
};

/* 123 */
typedef $71210C31999B47ECFCA79A4496892A9D mach_msg_header_t;

/* 125 */
typedef unsigned int mach_msg_bits_t;

/* 128 */
typedef unsigned int __darwin_natural_t;

/* 127 */
typedef __darwin_natural_t natural_t;

/* 126 */
typedef natural_t mach_msg_size_t;

/* 130 */
typedef natural_t mach_port_name_t;

/* 129 */
typedef mach_port_name_t mach_port_t;

/* 131 */
typedef integer_t mach_msg_id_t;

/* 124 */
#pragma pack(push, 4)
struct $71210C31999B47ECFCA79A4496892A9D
{
  mach_msg_bits_t msgh_bits;
  mach_msg_size_t msgh_size;
  mach_port_t msgh_remote_port;
  mach_port_t msgh_local_port;
  mach_msg_size_t msgh_reserved;
  mach_msg_id_t msgh_id;
};
#pragma pack(pop)

/* 132 */
struct utsname
{
  char sysname[256];
  char nodename[256];
  char release[256];
  char version[256];
  char machine[256];
};

