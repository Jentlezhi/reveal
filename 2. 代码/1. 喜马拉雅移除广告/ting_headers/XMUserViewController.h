//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMActionSheetViewDelegate-Protocol.h"
#import "XMAdFeaturesProtocol-Protocol.h"
#import "XMAlbumTitleTableViewCellDelegate-Protocol.h"
#import "XMBrandUserHeaderViewDelegate-Protocol.h"
#import "XMFindRecGuessLikeCellDelegate-Protocol.h"
#import "XMGiftViewManagerDelegate-Protocol.h"
#import "XMMMomentCellHandlerDelegate-Protocol.h"
#import "XMMNodeHandlerDelegate-Protocol.h"
#import "XMMVideoNodeViewDelegate-Protocol.h"
#import "XMMeSoundEditViewControllerDelegate-Protocol.h"
#import "XMMomentListVideoAutoPlayDataSource-Protocol.h"
#import "XMNPQACellDelegate-Protocol.h"
#import "XMNPQACmtInputViewDelegate-Protocol.h"
#import "XMNPQADetailCellDelegate-Protocol.h"
#import "XMNewUserHeaderViewDelegate-Protocol.h"
#import "XMNoDataTableViewCellDelegate-Protocol.h"
#import "XMPlayingImageViewDelegate-Protocol.h"
#import "XMSectionCellDelegate-Protocol.h"
#import "XMSoundTableViewCellDelegate-Protocol.h"
#import "XMTalkGroupTableViewCellDelegate-Protocol.h"
#import "XMUserBriefCellDelegate-Protocol.h"
#import "XMUserInfoCellDelegate-Protocol.h"
#import "XMUserQAFooterCellDelegate-Protocol.h"
#import "XMUserRSCellDelegate-Protocol.h"
#import "XMUserRankingCellDelegate-Protocol.h"
#import "XMUserSectionCellDelegate-Protocol.h"
#import "XMUserSectionViewDelegate-Protocol.h"
#import "XMUserSponsorCellDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSMutableArray, NSString, UIButton, UILabel, UIPopoverPresentationController, UITableView, UIView, UIViewController, UIWindow, XMActionSheetView, XMAlbumItem, XMAnchorAdInfo, XMBrandUserHeaderView, XMHomePageHeaderView, XMHomePagePerson, XMHomePageSponsorModel, XMHotlineService, XMMMomentCellHandler, XMMMomentCellLayoutConfig, XMMomentListVideoAutoPlay, XMNPQACellModel, XMNPSponsorCellModel, XMNewAlbumAnchorStoreInfo, XMNewUserHeaderView, XMOVoiceSignatureInfoModel, XMOthersSoundSignatureUserTipView, XMOthersSoundSignatureUserView, XMPersonItem, XMPlayingImageView, XMServerPostRequest, XMServerRequest, XMTalentModel, XMUserBlinkPresenter, XMUserHeaderPresenter, XMUserMCNPresenter, XMUserNotificationPresenter, XMUserPhotoPresenter, XMUserSectionView, XMUserTableViewPresenter, XMUserUbtPresenter, XMUserWeKeListModel;

@interface XMUserViewController : XMSubLevelViewController <XMAdFeaturesProtocol, XMMMomentCellHandlerDelegate, XMMNodeHandlerDelegate, XMBrandUserHeaderViewDelegate, XMMomentListVideoAutoPlayDataSource, XMMVideoNodeViewDelegate, XMUserBriefCellDelegate, XMNewUserHeaderViewDelegate, XMAlbumTitleTableViewCellDelegate, XMNoDataTableViewCellDelegate, XMMeSoundEditViewControllerDelegate, XMActionSheetViewDelegate, XMPlayingImageViewDelegate, XMUserSponsorCellDelegate, XMGiftViewManagerDelegate, XMNPQACmtInputViewDelegate, XMNPQACellDelegate, XMUserQAFooterCellDelegate, XMNPQADetailCellDelegate, XMUserSectionCellDelegate, XMUserSectionViewDelegate, XMSectionCellDelegate, XMUserRankingCellDelegate, XMFindRecGuessLikeCellDelegate, XMTalkGroupTableViewCellDelegate, XMUserRSCellDelegate, UIPopoverControllerDelegate, UIImagePickerControllerDelegate, XMUserInfoCellDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, XMSoundTableViewCellDelegate>
{
    UIView *_headerBgView;
    _Bool _loadedUserInfoData;
    _Bool _tingFriendHasMore;
    int _liveTotalCount;
    _Bool _loadedLiveData;
    _Bool _loadedAlbumData;
    _Bool _loadedSoundData;
    _Bool _loadedADData;
    _Bool _hasMoreGroupChat;
    int _photoAlbumCount;
    _Bool _loadedTingFriendData;
    int _currentPage;
    _Bool _reloadingData;
    _Bool _showUserInfo;
    _Bool _showTopBar;
    UIView *_topView;
    UIButton *_backBtn;
    UIButton *_focusBtn;
    UIButton *_messageBtn;
    UILabel *_nickNameLB;
    UIButton *_shareBtn;
    UIButton *_moreBtn;
    UIButton *_bottomLeftBtn;
    long long postDataTrackUid;
    double _showSectionOffset;
    double _sectionPhotoWallOffset;
    double _sectionProgramOffset;
    double _sectionInfoOffset;
    double _sectionQAOffset;
    double _sectionTingFriendOffset;
    _Bool _hasShowPageview;
    _Bool _isShowNewUserToast;
    _Bool supportMotion;
    _Bool _isShowProgressHud;
    _Bool _hasShow;
    _Bool _usePopover;
    _Bool _isShowThirdpartyLinks;
    _Bool _hasMoreSubscribe;
    _Bool _hasMoreListen;
    _Bool _hasMoreComment;
    _Bool _hasMoreCopyright;
    _Bool _openComment;
    _Bool _isShowCommunity;
    _Bool _isShowProgram;
    _Bool _isShowInfo;
    _Bool _isShowQA;
    _Bool _isShowTingFriend;
    _Bool _isShowSection;
    _Bool _isShowPhotoWall;
    _Bool _isShowLiveCardCell;
    _Bool _isViewDidAppear;
    _Bool _showAllBrief;
    _Bool _isOnSectionSelect;
    int currentUploadType;
    XMServerRequest *albumRequest;
    XMServerRequest *myHttpRequest;
    XMServerRequest *userRelationRequest;
    NSMutableArray *albumList;
    NSMutableArray *livesList;
    UITableView *soundTableView;
    MBProgressHUD *progressHUD;
    XMPersonItem *personItem;
    UIPopoverPresentationController *popover;
    XMServerRequest *uploadImageRequest;
    XMAlbumItem *_albumItem;
    long long _customSection;
    XMUserPhotoPresenter *_userPhotoPresenter;
    XMUserTableViewPresenter *_tableViewPresenter;
    XMUserBlinkPresenter *_blinkPresenter;
    XMUserUbtPresenter *_ubtPresenter;
    XMUserHeaderPresenter *_headerPresenter;
    XMUserMCNPresenter *_mcnPresenter;
    XMUserNotificationPresenter *_notificationPresenter;
    unsigned long long _operatedType;
    long long _operatedIndex;
    long long _operatedUploadId;
    NSString *_operatedUploadPath;
    long long _SoundTotalCount;
    long long _groupChatTotalCount;
    long long _subscribeCount;
    long long _listenCount;
    long long _copyrightCount;
    long long _albumTotalCount;
    long long _QATotalCount;
    long long _tingFriendTotalCount;
    NSString *_fansClubUrl;
    XMServerRequest *_soundsRequest;
    XMServerRequest *_livesRequest;
    NSMutableArray *_soundList;
    NSMutableArray *_commentList;
    NSArray *_bannerInfos;
    UIView *_userPageBanner;
    XMNewUserHeaderView *_headerView;
    XMBrandUserHeaderView *_brandHeaderView;
    NSMutableArray *_sectionArray;
    NSMutableArray *_programSectionArray;
    XMServerPostRequest *_deleteTrackRequest;
    XMActionSheetView *_sheetView;
    XMNPSponsorCellModel *_sponsorModel;
    NSMutableArray *_groupChatList;
    XMNPQACellModel *_qaModel;
    NSMutableArray *_qaList;
    XMUserSectionView *_sectionView;
    XMHotlineService *_hotlineService;
    NSArray *_subscribeModelArr;
    NSArray *_listenModelArr;
    NSMutableArray *_copyrightCardModelArr;
    NSMutableArray *_copyrightModelArr;
    NSArray *_albumPhotoModelArr;
    NSArray *_communityModels;
    NSArray *_communitiesModels;
    XMUserWeKeListModel *_wListModel;
    NSMutableArray *_momentLayoutArray;
    NSMutableArray *_publishLayoutArray;
    XMMMomentCellHandler *_cellHandler;
    XMMMomentCellLayoutConfig *_momentCellLayoutConfig;
    UIWindow *_topWindow;
    UIViewController *_topCtrl;
    UIView *_shareAdView;
    UIView *_brocasterAdView;
    NSMutableArray *_userTagsModel;
    XMTalentModel *_talentModel;
    XMHomePageHeaderView *_homePageHeader;
    XMOthersSoundSignatureUserView *_signatureUserView;
    XMOthersSoundSignatureUserTipView *_tip;
    XMHomePagePerson *_homepagePerson;
    XMHomePageSponsorModel *_homepageSponsorModel;
    XMOVoiceSignatureInfoModel *_signatureInfoModel;
    XMPlayingImageView *_avatarPlayingIV;
    XMAnchorAdInfo *_anchorAdInfo;
    XMNewAlbumAnchorStoreInfo *_anchorStoreInfo;
    XMMomentListVideoAutoPlay *_videoAutoPlay;
}

@property(retain, nonatomic) XMMomentListVideoAutoPlay *videoAutoPlay; // @synthesize videoAutoPlay=_videoAutoPlay;
@property(retain, nonatomic) XMNewAlbumAnchorStoreInfo *anchorStoreInfo; // @synthesize anchorStoreInfo=_anchorStoreInfo;
@property(retain, nonatomic) XMAnchorAdInfo *anchorAdInfo; // @synthesize anchorAdInfo=_anchorAdInfo;
@property(retain, nonatomic) XMPlayingImageView *avatarPlayingIV; // @synthesize avatarPlayingIV=_avatarPlayingIV;
@property(retain, nonatomic) XMOVoiceSignatureInfoModel *signatureInfoModel; // @synthesize signatureInfoModel=_signatureInfoModel;
@property(retain, nonatomic) XMHomePageSponsorModel *homepageSponsorModel; // @synthesize homepageSponsorModel=_homepageSponsorModel;
@property(retain, nonatomic) XMHomePagePerson *homepagePerson; // @synthesize homepagePerson=_homepagePerson;
@property(retain, nonatomic) XMOthersSoundSignatureUserTipView *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) XMOthersSoundSignatureUserView *signatureUserView; // @synthesize signatureUserView=_signatureUserView;
@property(retain, nonatomic) XMHomePageHeaderView *homePageHeader; // @synthesize homePageHeader=_homePageHeader;
@property(retain, nonatomic) XMTalentModel *talentModel; // @synthesize talentModel=_talentModel;
@property(retain, nonatomic) NSMutableArray *userTagsModel; // @synthesize userTagsModel=_userTagsModel;
@property(retain, nonatomic) UIView *brocasterAdView; // @synthesize brocasterAdView=_brocasterAdView;
@property(retain, nonatomic) UIView *shareAdView; // @synthesize shareAdView=_shareAdView;
@property(retain, nonatomic) UIViewController *topCtrl; // @synthesize topCtrl=_topCtrl;
@property(retain, nonatomic) UIWindow *topWindow; // @synthesize topWindow=_topWindow;
@property(retain, nonatomic) XMMMomentCellLayoutConfig *momentCellLayoutConfig; // @synthesize momentCellLayoutConfig=_momentCellLayoutConfig;
@property(retain, nonatomic) XMMMomentCellHandler *cellHandler; // @synthesize cellHandler=_cellHandler;
@property(retain, nonatomic) NSMutableArray *publishLayoutArray; // @synthesize publishLayoutArray=_publishLayoutArray;
@property(retain, nonatomic) NSMutableArray *momentLayoutArray; // @synthesize momentLayoutArray=_momentLayoutArray;
@property(nonatomic) _Bool isOnSectionSelect; // @synthesize isOnSectionSelect=_isOnSectionSelect;
@property(retain, nonatomic) XMUserWeKeListModel *wListModel; // @synthesize wListModel=_wListModel;
@property(retain, nonatomic) NSArray *communitiesModels; // @synthesize communitiesModels=_communitiesModels;
@property(retain, nonatomic) NSArray *communityModels; // @synthesize communityModels=_communityModels;
@property(retain, nonatomic) NSArray *albumPhotoModelArr; // @synthesize albumPhotoModelArr=_albumPhotoModelArr;
@property(retain, nonatomic) NSMutableArray *copyrightModelArr; // @synthesize copyrightModelArr=_copyrightModelArr;
@property(retain, nonatomic) NSMutableArray *copyrightCardModelArr; // @synthesize copyrightCardModelArr=_copyrightCardModelArr;
@property(retain, nonatomic) NSArray *listenModelArr; // @synthesize listenModelArr=_listenModelArr;
@property(retain, nonatomic) NSArray *subscribeModelArr; // @synthesize subscribeModelArr=_subscribeModelArr;
@property(retain, nonatomic) XMHotlineService *hotlineService; // @synthesize hotlineService=_hotlineService;
@property(retain, nonatomic) XMUserSectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) NSMutableArray *qaList; // @synthesize qaList=_qaList;
@property(retain, nonatomic) XMNPQACellModel *qaModel; // @synthesize qaModel=_qaModel;
@property(retain, nonatomic) NSMutableArray *groupChatList; // @synthesize groupChatList=_groupChatList;
@property(retain, nonatomic) XMNPSponsorCellModel *sponsorModel; // @synthesize sponsorModel=_sponsorModel;
@property(retain, nonatomic) XMActionSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) XMServerPostRequest *deleteTrackRequest; // @synthesize deleteTrackRequest=_deleteTrackRequest;
@property(nonatomic) _Bool showAllBrief; // @synthesize showAllBrief=_showAllBrief;
@property(retain, nonatomic) NSMutableArray *programSectionArray; // @synthesize programSectionArray=_programSectionArray;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) XMBrandUserHeaderView *brandHeaderView; // @synthesize brandHeaderView=_brandHeaderView;
@property(retain, nonatomic) XMNewUserHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *userPageBanner; // @synthesize userPageBanner=_userPageBanner;
@property(retain, nonatomic) NSArray *bannerInfos; // @synthesize bannerInfos=_bannerInfos;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) NSMutableArray *soundList; // @synthesize soundList=_soundList;
@property(retain, nonatomic) XMServerRequest *livesRequest; // @synthesize livesRequest=_livesRequest;
@property(retain, nonatomic) XMServerRequest *soundsRequest; // @synthesize soundsRequest=_soundsRequest;
@property(copy, nonatomic) NSString *fansClubUrl; // @synthesize fansClubUrl=_fansClubUrl;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) _Bool isShowLiveCardCell; // @synthesize isShowLiveCardCell=_isShowLiveCardCell;
@property(nonatomic) _Bool isShowPhotoWall; // @synthesize isShowPhotoWall=_isShowPhotoWall;
@property(nonatomic) _Bool isShowSection; // @synthesize isShowSection=_isShowSection;
@property(nonatomic) _Bool isShowTingFriend; // @synthesize isShowTingFriend=_isShowTingFriend;
@property(nonatomic) _Bool isShowQA; // @synthesize isShowQA=_isShowQA;
@property(nonatomic) _Bool isShowInfo; // @synthesize isShowInfo=_isShowInfo;
@property(nonatomic) _Bool isShowProgram; // @synthesize isShowProgram=_isShowProgram;
@property(nonatomic) _Bool isShowCommunity; // @synthesize isShowCommunity=_isShowCommunity;
@property(nonatomic) long long tingFriendTotalCount; // @synthesize tingFriendTotalCount=_tingFriendTotalCount;
@property(nonatomic) long long QATotalCount; // @synthesize QATotalCount=_QATotalCount;
@property(nonatomic) long long albumTotalCount; // @synthesize albumTotalCount=_albumTotalCount;
@property(nonatomic) _Bool openComment; // @synthesize openComment=_openComment;
@property(nonatomic) long long copyrightCount; // @synthesize copyrightCount=_copyrightCount;
@property(nonatomic) _Bool hasMoreCopyright; // @synthesize hasMoreCopyright=_hasMoreCopyright;
@property(nonatomic) _Bool hasMoreComment; // @synthesize hasMoreComment=_hasMoreComment;
@property(nonatomic) _Bool hasMoreListen; // @synthesize hasMoreListen=_hasMoreListen;
@property(nonatomic) long long listenCount; // @synthesize listenCount=_listenCount;
@property(nonatomic) _Bool hasMoreSubscribe; // @synthesize hasMoreSubscribe=_hasMoreSubscribe;
@property(nonatomic) long long subscribeCount; // @synthesize subscribeCount=_subscribeCount;
@property(nonatomic) long long groupChatTotalCount; // @synthesize groupChatTotalCount=_groupChatTotalCount;
@property(nonatomic) long long SoundTotalCount; // @synthesize SoundTotalCount=_SoundTotalCount;
@property(copy, nonatomic) NSString *operatedUploadPath; // @synthesize operatedUploadPath=_operatedUploadPath;
@property(nonatomic) long long operatedUploadId; // @synthesize operatedUploadId=_operatedUploadId;
@property(nonatomic) long long operatedIndex; // @synthesize operatedIndex=_operatedIndex;
@property(nonatomic) unsigned long long operatedType; // @synthesize operatedType=_operatedType;
@property(nonatomic) _Bool isShowThirdpartyLinks; // @synthesize isShowThirdpartyLinks=_isShowThirdpartyLinks;
@property(nonatomic) _Bool usePopover; // @synthesize usePopover=_usePopover;
@property(nonatomic) _Bool hasShow; // @synthesize hasShow=_hasShow;
@property(retain, nonatomic) XMUserNotificationPresenter *notificationPresenter; // @synthesize notificationPresenter=_notificationPresenter;
@property(retain, nonatomic) XMUserMCNPresenter *mcnPresenter; // @synthesize mcnPresenter=_mcnPresenter;
@property(retain, nonatomic) XMUserHeaderPresenter *headerPresenter; // @synthesize headerPresenter=_headerPresenter;
@property(retain, nonatomic) XMUserUbtPresenter *ubtPresenter; // @synthesize ubtPresenter=_ubtPresenter;
@property(retain, nonatomic) XMUserBlinkPresenter *blinkPresenter; // @synthesize blinkPresenter=_blinkPresenter;
@property(retain, nonatomic) XMUserTableViewPresenter *tableViewPresenter; // @synthesize tableViewPresenter=_tableViewPresenter;
@property(retain, nonatomic) XMUserPhotoPresenter *userPhotoPresenter; // @synthesize userPhotoPresenter=_userPhotoPresenter;
@property(nonatomic) _Bool isShowProgressHud; // @synthesize isShowProgressHud=_isShowProgressHud;
@property(nonatomic) long long customSection; // @synthesize customSection=_customSection;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(retain, nonatomic) XMServerRequest *uploadImageRequest; // @synthesize uploadImageRequest;
@property(retain, nonatomic) UIPopoverPresentationController *popover; // @synthesize popover;
@property(nonatomic) int currentUploadType; // @synthesize currentUploadType;
@property(retain, nonatomic) XMPersonItem *personItem; // @synthesize personItem;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD;
@property(retain, nonatomic) UITableView *soundTableView; // @synthesize soundTableView;
@property(retain, nonatomic) NSMutableArray *livesList; // @synthesize livesList;
@property(retain, nonatomic) NSMutableArray *albumList; // @synthesize albumList;
@property(retain, nonatomic) XMServerRequest *userRelationRequest; // @synthesize userRelationRequest;
@property(retain, nonatomic) XMServerRequest *myHttpRequest; // @synthesize myHttpRequest;
@property(retain, nonatomic) XMServerRequest *albumRequest; // @synthesize albumRequest;
@property(nonatomic) _Bool supportMotion; // @synthesize supportMotion;
- (void).cxx_destruct;
- (void)checkNetAvailable;
- (_Bool)showMuteOfVideoNodeView:(id)arg1;
- (double)volumeOfVideoNodeView:(id)arg1;
- (void)videoNodeViewDidTapMuteButton:(id)arg1;
- (id)playerOfVideoNodeView:(id)arg1;
- (unsigned long long)statusOfVideoNodeView:(id)arg1;
- (id)layoutArrayOfMomentListVideoAutoPlay:(id)arg1;
- (void)updateStatusBarStyle;
- (void)showCustomTabSection;
- (void)p_openCommunityCtrl;
- (void)intimateCommunityNPCellDidClick:(id)arg1;
- (long long)indexOfMomentInMomentLayoutArray:(id)arg1;
- (long long)indexOfMoment:(id)arg1;
- (void)momentCellHandler:(id)arg1 didShareSuccess:(id)arg2 shareModel:(id)arg3;
- (void)momentCellHandler:(id)arg1 willShare:(id)arg2 shareModel:(id)arg3;
- (void)momentCellHandler:(id)arg1 tapShareButton:(id)arg2;
- (void)momentCellHandler:(id)arg1 tapPraiseButton:(id)arg2;
- (void)momentCellHandler:(id)arg1 tapCommentButton:(id)arg2;
- (void)momentCellHandler:(id)arg1 didEnterSourceDetailOfMoment:(id)arg2;
- (void)momentCellHandler:(id)arg1 didEnterMommentDetail:(id)arg2 controller:(id)arg3;
- (void)nodeHandler:(id)arg1 textNodeView:(id)arg2 didEnterDetailOfTopic:(unsigned long long)arg3 linkUrl:(id)arg4;
- (void)nodeHandler:(id)arg1 trackNodeViewDidTapDownloadButton:(id)arg2;
- (void)nodeHandler:(id)arg1 didTapBookMark:(id)arg2 range:(struct _NSRange)arg3 nodeView:(id)arg4;
- (void)nodeHandler:(id)arg1 didUncollectListenlist:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 didCollectListenlist:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 didUnsubscribeAlbum:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 didSubscribeAlbum:(id)arg2 nodeView:(id)arg3;
- (void)didEnterDetailOfMoment:(id)arg1 controller:(id)arg2;
- (void)nodeHandler:(id)arg1 videoNodeViewDidTapReplayButton:(id)arg2;
- (void)nodeHandler:(id)arg1 didEnterDetailOfMoment:(id)arg2 nodeView:(id)arg3 controller:(id)arg4;
- (void)nodeHandler:(id)arg1 didTapNodeView:(id)arg2;
- (void)normalCellDidTapAvatarImageView:(id)arg1;
- (void)renewFoucesButton;
- (void)showHomePagePhotoWallWithIndex:(long long)arg1;
- (void)showPhotoWall:(id)arg1 withIndex:(long long)arg2;
- (void)didChangeFollowStateNotification:(id)arg1;
- (void)onWeiboInfoUnOpen;
- (void)onWeiboInfoOpen;
- (void)onSubscribeUnOpen;
- (void)hotlinePayDidSuccess;
- (void)groupStatusDidChanged:(id)arg1;
- (void)deleteSoundItem:(id)arg1;
- (void)userInfoCell:(id)arg1 tag:(id)arg2;
- (void)userRSCell:(id)arg1 sponsorTouch:(id)arg2;
- (void)userRSCell:(id)arg1 sponsorTopTouch:(id)arg2;
- (void)userRankingCell:(id)arg1 rightSponsorTouch:(id)arg2;
- (struct CGRect)rectForUserSectionType:(int)arg1;
- (void)onSectionSelect:(long long)arg1 isFirst:(_Bool)arg2 animated:(_Bool)arg3;
- (void)onSectionSelect:(long long)arg1 isFirst:(_Bool)arg2;
- (void)userSectionCell:(id)arg1 onSectionSelect:(long long)arg2 isFirst:(_Bool)arg3;
- (void)userSectionView:(id)arg1 onSectionSelect:(long long)arg2 isFirst:(_Bool)arg3;
- (void)openOfficialTagDetailView:(id)arg1;
- (void)openUnVerifyWebView;
- (void)showShop;
- (void)showCooperate;
- (void)showGifRank;
- (void)showTopAnchorRankVC;
- (void)showGift;
- (void)userSponsorCell:(id)arg1 rightSponsorTouch:(id)arg2;
- (void)userSponsorCell:(id)arg1 sponsorTopTouch:(id)arg2;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)onDownloadButtonCliked:(id)arg1;
- (void)onEditButtonCliked:(id)arg1;
- (void)optionActionWithRecord:(id)arg1;
- (void)playerSound:(id)arg1;
- (void)soundTableViewCellDidClickMore:(id)arg1;
- (void)soundTableViewCell:(id)arg1 buySound:(id)arg2;
- (void)cancelAllOperations;
- (void)onBack:(_Bool)arg1;
- (void)back;
- (void)openPhotoWallDetailVC;
- (void)sectionCellMoreDidCilck:(id)arg1;
- (void)sectionCellTagDidCilck:(id)arg1;
- (void)showUser:(unsigned long long)arg1;
- (void)showUserQADetail:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)showUserQADetailForPay:(id)arg1;
- (void)QADetailCell:(id)arg1 listeningBtnTouchUpInside:(id)arg2;
- (void)postListenStatic;
- (void)QADetailCell:(id)arg1 askerNicknameTouchUpInside:(id)arg2;
- (void)postQAStatic;
- (void)userQAFooterCell:(id)arg1 askBtnTouch:(id)arg2;
- (void)showQACmtInputView:(unsigned long long)arg1;
- (void)QACell:(id)arg1 askBtnTouchUpInside:(id)arg2;
- (void)pushAlbumWithAlbumItem:(id)arg1;
- (void)findRecGuessLikeCellObject:(id)arg1 didClickItem:(id)arg2 atPosition:(long long)arg3;
- (void)onGiftViewDidClickRank;
- (void)postVIPDataTrackInfoSrcModule:(id)arg1;
- (void)onShareUser:(id)arg1;
- (void)onPlusTap;
- (void)onLikeLabelTap;
- (void)onFouceLabelTap;
- (void)more;
- (void)updateTopBarFocusStatus;
- (void)topBarRefreshWithShow:(_Bool)arg1;
- (void)p_gotoSignature;
- (void)onBottomBtn:(id)arg1;
- (void)layoutBottomBtn:(id)arg1;
- (void)didClickTopBarMessage;
- (void)didClickTopBarFocus;
- (void)addTopBarView;
- (void)changeFollowState;
- (void)openMeInfoProfile;
- (void)onEditBtnClicked:(id)arg1;
- (void)onMailButtonClicked:(id)arg1;
- (void)followActionDone:(id)arg1;
- (void)onFollow;
- (void)onFoucusButtonClicked:(id)arg1;
- (void)onAnswerButtonClicked:(id)arg1;
- (void)onMoreBriefBtn:(double)arg1;
- (void)onHeadBtn;
- (void)onEditBtn;
- (void)onPhotoWallTap:(id)arg1 withIndex:(long long)arg2;
- (void)onHomePagePhotoWallTapWithIndex:(long long)arg1;
- (void)userSponsorView:(id)arg1 sponsorTouch:(id)arg2;
- (void)userSponsorView:(id)arg1 sponsorTopTouch:(id)arg2;
- (void)tapLink:(id)arg1 linkUrl:(id)arg2;
- (void)onHeadBtn:(id)arg1;
- (id)currentMainVisibleCells;
- (void)recordMainVisibleMomentDidHover:(id)arg1;
- (void)tableViewDidHover:(id)arg1;
- (void)tableViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showUserSubscribeList;
- (void)showPrivacySetting;
- (void)showUserQA:(unsigned long long)arg1;
- (void)showGroupList;
- (void)openAllWeKeView;
- (void)openAllSoundView;
- (void)openAllAlbumView;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)onBreifMoreButtonClickedShowAllBrief:(_Bool)arg1;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)resetMJFooterStatus;
- (void)reloadData;
- (_Bool)isShowRS;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setSectionOffsets;
- (void)updateShowSection;
- (_Bool)isShowInfoSection;
- (void)updateSectionData;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeFromBlockList;
- (void)addToBlockList;
- (void)AddToBlockList:(_Bool)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)reloadHeaderFrame;
- (void)reloadHeader;
- (id)convertViewToImage:(id)arg1;
- (void)onNoviceGuideViewDismiss;
- (void)showNewUserToast;
- (void)updateTagsData;
- (void)updateSignatureFrom:(id)arg1;
- (void)updateCommentFromDict:(id)arg1;
- (void)updateDataFromDict:(id)arg1;
- (void)updateDataFromDictRel:(id)arg1;
- (void)requestTingFriendDataForPage:(int)arg1;
- (void)requestAlbumListFailedSelector:(id)arg1;
- (void)requestAlbumListFinishedSelector:(id)arg1;
- (void)requestAlbumsData;
- (void)requestSoundListFailedSelector:(id)arg1;
- (void)requestSoundListFinishedSelector:(id)arg1;
- (void)requestSoundData;
- (void)postLiveCardCellDynamicModule;
- (void)onLiveRequestFailed:(id)arg1;
- (void)onLiveRequestFinished:(id)arg1;
- (void)requestLiveData;
- (void)requestRandomUserFinishedSelector:(id)arg1;
- (void)requestRandomUser;
- (void)requestRelationFor:(long long)arg1;
- (void)requestUserInfoFinishedSelector:(id)arg1;
- (void)requestUserInfoFailSelector:(id)arg1;
- (void)requestUserInfo:(long long)arg1;
- (void)receiveAlbumSubscriptionDidChangeNotification:(id)arg1;
- (void)receiveJoinCommunityNotification:(id)arg1;
- (void)receiveSynchronizationNotification:(id)arg1;
- (void)receiveLoginSuccessNotification:(id)arg1;
- (void)onPlayerStopped;
- (void)onPlayingTrackChanged;
- (void)reloadDataFromDownloadNotification:(id)arg1;
- (void)onVoiceSignatureInfoChanged:(id)arg1;
- (void)onMeInfoChanged:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadStart:(id)arg1;
- (void)onTrackBuyAlbumSuccess:(id)arg1;
- (void)onTrackBuySuccess:(id)arg1;
- (void)statusBarFrameWillChangeNotification:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)showPageviewPostStatistics;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onPlayingTrackPaused;
- (void)refreshUI;
- (void)viewDidUnload;
- (void)reloadView;
- (void)onGiftDidSendSuccess:(id)arg1 quantity:(long long)arg2 rank:(long long)arg3;
- (void)willJoinTalkGroupTableViewCell:(id)arg1;
- (id)adViewWillRequestWithParamsForPositionName:(id)arg1;
- (void)adViewDidUpdateWithAdModels:(id)arg1 andPositionName:(id)arg2;
- (void)adViewWillAddAds;
- (void)didSelectAtTalkGroupTableViewCell:(id)arg1;
- (double)contentBottomOffset;
- (void)initializeHomePageHeaderView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (_Bool)isMe;
- (void)deleteMomentLayoutInMomentLayoutArray:(id)arg1;
- (void)nodeHandler:(id)arg1 moment:(id)arg2 voteNode:(id)arg3 didVoteItemArray:(id)arg4;
- (void)nodeHandler:(id)arg1 moment:(id)arg2 voteNode:(id)arg3 didVoteItem:(id)arg4;
- (void)momentCellHandler:(id)arg1 didDepraiseHotComment:(id)arg2 hotComment:(id)arg3;
- (void)momentCellHandler:(id)arg1 didPraiseHotComment:(id)arg2 hotComment:(id)arg3;
- (void)momentCellHandler:(id)arg1 didDefollowAuthor:(id)arg2;
- (void)momentCellHandler:(id)arg1 didFollowAuthor:(id)arg2;
- (void)momentCellHandler:(id)arg1 didDepraiseMoment:(id)arg2;
- (void)momentCellHandler:(id)arg1 didPraiseMoment:(id)arg2;
- (void)momentCellHandler:(id)arg1 didDeleteMoment:(id)arg2;
- (void)publishSucessWithItem;
- (long long)indexOfPublishMomentInMomentLaoutArray:(id)arg1;
- (long long)indexOfPublishMomentInPublishLayoutArray:(id)arg1;
- (void)deletePublishDataWithItem:(id)arg1;
- (void)updatePublishDataWithItem:(id)arg1;
- (void)publisheStatusChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

