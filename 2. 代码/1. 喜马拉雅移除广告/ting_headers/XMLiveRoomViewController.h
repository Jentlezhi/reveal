//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveBaseMainVC.h"

#import "SDWebImageManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "XMCountingViewDelegate-Protocol.h"
#import "XMGiftViewManagerDelegate-Protocol.h"
#import "XMLiveActivityPendantViewDelegete-Protocol.h"
#import "XMLiveAlphaMaskGuideViewDelegate-Protocol.h"
#import "XMLiveBarrageHelperDelegate-Protocol.h"
#import "XMLiveBulletAlertViewDelegate-Protocol.h"
#import "XMLiveGiftPopupViewDelegate-Protocol.h"
#import "XMLiveLoveMicListDelegate-Protocol.h"
#import "XMLiveLoveMicWaitTipViewDelegate-Protocol.h"
#import "XMLiveLovePanelViewDelegate-Protocol.h"
#import "XMLiveMicEmojiPannelViewDelegate-Protocol.h"
#import "XMLiveMsgCellDelegate-Protocol.h"
#import "XMLiveMsgLayoutDelegate-Protocol.h"
#import "XMLiveNobleOnlineViewDelegate-Protocol.h"
#import "XMLivePopMenuViewDelegate-Protocol.h"
#import "XMLiveRoomBizControlDelegate-Protocol.h"
#import "XMLiveRoomBizEventHandlerDelegate-Protocol.h"
#import "XMLiveRoomBizManagerCombined-Protocol.h"
#import "XMLiveRoomChatMsgBaseManagerDelegate-Protocol.h"
#import "XMLiveRoomInputViewDelegate-Protocol.h"
#import "XMLiveRoomPKArenaViewDelegate-Protocol.h"
#import "XMLiveRoomPKControlDelegate-Protocol.h"
#import "XMLiveRoomTopViewDelegate-Protocol.h"
#import "XMLiveToastDelegate-Protocol.h"
#import "XMLoveModeControlDelegate-Protocol.h"
#import "XMMicManagerLiveStreamDelegate-Protocol.h"
#import "XMMicStackMenuDelegate-Protocol.h"
#import "XMNormalRedpacketsHelperDelegate-Protocol.h"
#import "XMPopMenuDataSource-Protocol.h"
#import "XMRoomPopInfoViewDelegate-Protocol.h"
#import "XMTimedRedpacketsHelperDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UIView, XMAnthorInfoPopView, XMCountingView, XMDubPanelView, XMFansGroupPopView, XMLAnchorMicControlView, XMLiveBackRecomendAlertView, XMLiveBulletAlertView, XMLiveCameraActionHandler, XMLiveFreeGiftPopView, XMLiveLoveControlPopView, XMLiveLoveMicWaitListView, XMLiveLoveMicWaitTipView, XMLiveLovePanelView, XMLiveMicEmojiPannelView, XMLiveNobleOnlineView, XMLivePopMenuView, XMLiveRoomApproachInfo, XMLiveRoomBizEventHandler, XMLiveRoomBottomFragment, XMLiveRoomBulletHelper, XMLiveRoomGroupController, XMLiveRoomInputView, XMLiveRoomNormalChatMsgManager, XMLiveRoomPKArenaView, XMLiveRoomPKStartView, XMLiveRoomTopView, XMLiveTaskPopView, XMLiveToast, XMLiveUser, XMLiveUserDirectActions, XMMicEffectsControllerView, XMMicMusicControlView, XMMicStackMenu, XMNRequest, XMNormalRedpacketsHelper, XMPopMenuView, XMPopOverView, XMTimedRedpacketsHelper;
@protocol XMLiveRoomToolBarAction;

@interface XMLiveRoomViewController : XMLiveBaseMainVC <XMLiveRoomBizEventHandlerDelegate, XMLiveRoomPKControlDelegate, XMLiveRoomBizManagerCombined, XMLiveBarrageHelperDelegate, XMLiveGiftPopupViewDelegate, XMLiveMsgLayoutDelegate, XMLiveMsgCellDelegate, XMLiveMicEmojiPannelViewDelegate, XMLiveRoomTopViewDelegate, XMLivePopMenuViewDelegate, XMLiveRoomInputViewDelegate, UIActionSheetDelegate, XMRoomPopInfoViewDelegate, XMGiftViewManagerDelegate, XMCountingViewDelegate, SDWebImageManagerDelegate, XMMicStackMenuDelegate, XMMicManagerLiveStreamDelegate, XMLiveActivityPendantViewDelegete, XMLiveRoomChatMsgBaseManagerDelegate, XMLiveToastDelegate, XMLiveLovePanelViewDelegate, XMLoveModeControlDelegate, XMLiveLoveMicListDelegate, XMLiveLoveMicWaitTipViewDelegate, XMLiveBulletAlertViewDelegate, XMLiveNobleOnlineViewDelegate, XMLiveRoomPKArenaViewDelegate, XMLiveRoomBizControlDelegate, XMLiveAlphaMaskGuideViewDelegate, XMTimedRedpacketsHelperDelegate, XMNormalRedpacketsHelperDelegate, XMPopMenuDataSource>
{
    UIView<XMLiveRoomToolBarAction> *_toolBarView;
    XMCountingView *_countingView;
    UIImageView *_bgMaskView;
    long long _actionSheetType;
    _Bool _needShowTip;
    _Bool _isInGuide;
    _Bool _canPopChargeAlert;
    _Bool _canShowEnterTips;
    XMLiveUser *announcer;
    NSArray *topRankList;
    NSString *_chargeWebUrl;
    XMLiveToast *_chargeToast;
    XMLivePopMenuView *_morePopMenu;
    XMPopOverView *_anchorRankPopView;
    NSMutableArray *_bottomDockerDataSource;
    NSMutableDictionary *_bottomDockerUniqueViewDict;
    XMLiveTaskPopView *_listenTaskView;
    XMLiveBackRecomendAlertView *_backRecommendAlert;
    XMLiveCameraActionHandler *_cameraHandler;
    NSMutableDictionary *_userInfoDict;
    XMAnthorInfoPopView *_anthorInfoView;
    XMFansGroupPopView *_fansGroupView;
    XMPopMenuView *_hotwordPop;
    XMLAnchorMicControlView *_anchorMicView;
    XMMicStackMenu *_micStackMenu;
    XMDubPanelView *_dubPanelView;
    XMMicMusicControlView *_micMusicControlView;
    UIView *_liveRoomAdView;
    XMLiveRoomBulletHelper *_bulletHelper;
    XMTimedRedpacketsHelper *_timedRedpacketHelper;
    XMNormalRedpacketsHelper *_normalRedpacketHelper;
    XMMicEffectsControllerView *_micEffectsControllerView;
    XMLiveBulletAlertView *_bulletAlert;
    XMLiveLovePanelView *_lovePanelView;
    XMLiveLoveControlPopView *_loveControlPopView;
    XMLiveLoveMicWaitListView *_loveMicWaitListView;
    XMLiveLoveMicWaitTipView *_loveMicWaitTipView;
    XMLiveRoomBizEventHandler *_bizEventHandler;
    XMLiveNobleOnlineView *_nobleOnlineView;
    XMLiveRoomPKArenaView *_pkArenaView;
    XMLiveRoomPKStartView *_pkStartView;
    XMLiveUserDirectActions *_userDirectActions;
    NSString *_lastInputText;
    XMLiveMicEmojiPannelView *_micEmojiPannelView;
    NSMutableArray *_anchorToolItems;
    NSMutableArray *_managerToolItems;
    NSMutableArray *_audienceToolItems;
    XMNRequest *_playAddressReq;
    XMLiveRoomNormalChatMsgManager *_chatMsgManager;
    XMLiveFreeGiftPopView *_freeGiftPopView;
    XMNRequest *_batchQueryAvatarReq;
    NSMutableArray *_batchQueryUids;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *batchQueryUids; // @synthesize batchQueryUids=_batchQueryUids;
@property(retain, nonatomic) XMNRequest *batchQueryAvatarReq; // @synthesize batchQueryAvatarReq=_batchQueryAvatarReq;
@property(retain, nonatomic) XMLiveFreeGiftPopView *freeGiftPopView; // @synthesize freeGiftPopView=_freeGiftPopView;
@property(retain, nonatomic) XMLiveRoomNormalChatMsgManager *chatMsgManager; // @synthesize chatMsgManager=_chatMsgManager;
@property(retain, nonatomic) XMNRequest *playAddressReq; // @synthesize playAddressReq=_playAddressReq;
@property(retain, nonatomic) NSMutableArray *audienceToolItems; // @synthesize audienceToolItems=_audienceToolItems;
@property(retain, nonatomic) NSMutableArray *managerToolItems; // @synthesize managerToolItems=_managerToolItems;
@property(retain, nonatomic) NSMutableArray *anchorToolItems; // @synthesize anchorToolItems=_anchorToolItems;
@property(retain, nonatomic) XMLiveMicEmojiPannelView *micEmojiPannelView; // @synthesize micEmojiPannelView=_micEmojiPannelView;
@property(copy, nonatomic) NSString *lastInputText; // @synthesize lastInputText=_lastInputText;
@property(nonatomic) _Bool canShowEnterTips; // @synthesize canShowEnterTips=_canShowEnterTips;
@property(retain, nonatomic) XMLiveUserDirectActions *userDirectActions; // @synthesize userDirectActions=_userDirectActions;
@property(retain, nonatomic) XMLiveRoomPKStartView *pkStartView; // @synthesize pkStartView=_pkStartView;
@property(retain, nonatomic) XMLiveRoomPKArenaView *pkArenaView; // @synthesize pkArenaView=_pkArenaView;
@property(retain, nonatomic) XMLiveNobleOnlineView *nobleOnlineView; // @synthesize nobleOnlineView=_nobleOnlineView;
@property(retain, nonatomic) XMLiveRoomBizEventHandler *bizEventHandler; // @synthesize bizEventHandler=_bizEventHandler;
@property(retain, nonatomic) XMLiveLoveMicWaitTipView *loveMicWaitTipView; // @synthesize loveMicWaitTipView=_loveMicWaitTipView;
@property(retain, nonatomic) XMLiveLoveMicWaitListView *loveMicWaitListView; // @synthesize loveMicWaitListView=_loveMicWaitListView;
@property(retain, nonatomic) XMLiveLoveControlPopView *loveControlPopView; // @synthesize loveControlPopView=_loveControlPopView;
@property(retain, nonatomic) XMLiveLovePanelView *lovePanelView; // @synthesize lovePanelView=_lovePanelView;
@property(retain, nonatomic) XMLiveBulletAlertView *bulletAlert; // @synthesize bulletAlert=_bulletAlert;
@property(retain, nonatomic) XMMicEffectsControllerView *micEffectsControllerView; // @synthesize micEffectsControllerView=_micEffectsControllerView;
@property(retain, nonatomic) XMNormalRedpacketsHelper *normalRedpacketHelper; // @synthesize normalRedpacketHelper=_normalRedpacketHelper;
@property(retain, nonatomic) XMTimedRedpacketsHelper *timedRedpacketHelper; // @synthesize timedRedpacketHelper=_timedRedpacketHelper;
@property(retain, nonatomic) XMLiveRoomBulletHelper *bulletHelper; // @synthesize bulletHelper=_bulletHelper;
@property(retain, nonatomic) UIView *liveRoomAdView; // @synthesize liveRoomAdView=_liveRoomAdView;
@property(retain, nonatomic) XMMicMusicControlView *micMusicControlView; // @synthesize micMusicControlView=_micMusicControlView;
@property(retain, nonatomic) XMDubPanelView *dubPanelView; // @synthesize dubPanelView=_dubPanelView;
@property(retain, nonatomic) XMMicStackMenu *micStackMenu; // @synthesize micStackMenu=_micStackMenu;
@property(retain, nonatomic) XMLAnchorMicControlView *anchorMicView; // @synthesize anchorMicView=_anchorMicView;
@property(retain, nonatomic) XMPopMenuView *hotwordPop; // @synthesize hotwordPop=_hotwordPop;
@property(retain, nonatomic) XMFansGroupPopView *fansGroupView; // @synthesize fansGroupView=_fansGroupView;
@property(retain, nonatomic) XMAnthorInfoPopView *anthorInfoView; // @synthesize anthorInfoView=_anthorInfoView;
@property(retain, nonatomic) NSMutableDictionary *userInfoDict; // @synthesize userInfoDict=_userInfoDict;
@property(retain, nonatomic) XMLiveCameraActionHandler *cameraHandler; // @synthesize cameraHandler=_cameraHandler;
@property(retain, nonatomic) XMLiveBackRecomendAlertView *backRecommendAlert; // @synthesize backRecommendAlert=_backRecommendAlert;
@property(retain, nonatomic) XMLiveTaskPopView *listenTaskView; // @synthesize listenTaskView=_listenTaskView;
@property(retain, nonatomic) NSMutableDictionary *bottomDockerUniqueViewDict; // @synthesize bottomDockerUniqueViewDict=_bottomDockerUniqueViewDict;
@property(retain, nonatomic) NSMutableArray *bottomDockerDataSource; // @synthesize bottomDockerDataSource=_bottomDockerDataSource;
@property(retain, nonatomic) XMPopOverView *anchorRankPopView; // @synthesize anchorRankPopView=_anchorRankPopView;
@property(retain, nonatomic) XMLivePopMenuView *morePopMenu; // @synthesize morePopMenu=_morePopMenu;
@property(retain, nonatomic) XMLiveToast *chargeToast; // @synthesize chargeToast=_chargeToast;
@property(retain, nonatomic) NSString *chargeWebUrl; // @synthesize chargeWebUrl=_chargeWebUrl;
@property(nonatomic) _Bool canPopChargeAlert; // @synthesize canPopChargeAlert=_canPopChargeAlert;
@property(retain, nonatomic) NSArray *topRankList; // @synthesize topRankList;
@property(retain, nonatomic) XMLiveUser *announcer; // @synthesize announcer;
- (void)dismissKeyBoard;
- (void)showKeyBoard:(_Bool)arg1;
- (id)popMenuView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)popMenuView:(id)arg1 contentSizeThatFits:(struct CGSize)arg2;
- (long long)popMenuView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)tintColorForPopMenuView:(id)arg1;
- (void)onNormalRedPacketPopViewWillShow;
- (void)onTimedRedpacketSelected:(id)arg1;
- (void)onTimedRedPacketPopViewWillShow:(id)arg1;
- (void)onTimedRedpacketFollowClicked;
- (void)onTimedRedpacketWillHide:(id)arg1;
- (void)onTimedRedpacketNeedShow:(id)arg1;
- (void)handleRedPacketList:(id)arg1;
- (void)fetchCurrentRoomRedPacketList:(_Bool)arg1;
- (void)enterLiveRoomSuccess;
- (void)addLocalTipsMsg:(id)arg1 tipsType:(unsigned long long)arg2;
- (void)deleteFllowTipsMsgs;
- (void)addFriendShipForListen;
- (void)didSelectAudienceMic:(id)arg1;
- (void)onObservedLoveModeStatus:(int)arg1;
- (void)onObservedValueChangedForKeyPath:(id)arg1;
- (void)showDebugInfoView;
- (void)resetRoomUIOnChange;
- (void)resetRoomDataOnChange;
- (void)onLivePageInit;
- (void)onLivePageRelease;
- (void)onLivePageDataReload:(id)arg1;
- (void)updateInputBulletNumber;
- (void)relateAnchorDetailChanged;
- (void)onListenUserInfoChange;
- (_Bool)pageCanScrollOnDirection;
- (_Bool)pageScrollableMoveWithPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImage:(id)arg1;
- (void)didPressImageAtIndex:(long long)arg1 img:(id)arg2;
- (_Bool)shouldAggregateMinorActivityPendant:(_Bool)arg1;
- (_Bool)shouldShowMinorActivityPendant:(_Bool)arg1;
- (_Bool)shouldShowMajorActivityPendant;
- (void)setupADView;
- (id)getRandomPicUrl;
- (id)getThumbImageUrl:(id)arg1;
- (struct CGPoint)pointForTopicButton;
- (struct CGPoint)pointForBillboardView;
- (struct CGPoint)pointForShowDetail;
- (void)pasteText:(id)arg1;
- (void)viewProfileWithUid:(long long)arg1 name:(id)arg2;
- (void)onToastHideDidClick:(id)arg1;
- (void)uploadImageData:(id)arg1;
- (void)showSendPicture;
- (_Bool)isInMicEmoticonAnimation;
- (void)startPlayLiveItem:(id)arg1;
- (double)startLiveOffset;
- (void)jumpWithADItem:(id)arg1;
- (void)onPopMenuView:(id)arg1 selectedAt:(id)arg2;
- (void)prepareCountDownFinish;
- (void)alphaMaskGuideViewDidDismiss;
- (_Bool)isInMicInteractive;
- (void)leaveCheckMicWithAlertCompletion:(CDUnknownBlockType)arg1;
- (void)onRoomPlayModeMaskUpdateNotification:(id)arg1;
- (id)processConfigDictFrom184Iting:(id)arg1;
- (void)prepareShowMaskGuard;
- (struct CGRect)convertFrom:(struct CGRect)arg1 toSize:(double)arg2;
- (void)onReceivedOpenUserInfoPopCardNotification:(id)arg1;
- (void)onReceiveFollowStatusChangeNotification:(id)arg1;
- (void)onReceiveDidEnterBackgroundNotification:(id)arg1;
- (void)onReceiveWillEnterForgroundNotification:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)onReceiveSynPointNotification:(id)arg1;
- (void)onPopViewDidClickChat:(id)arg1;
- (void)onPopViewDidClickAtUser:(id)arg1;
- (void)onPopViewDidClickMore:(id)arg1;
- (void)onPopViewDidClickReport:(id)arg1;
- (void)onPopViewDidClickManage:(id)arg1;
- (void)onPopViewDidClickFunsClub:(id)arg1;
- (void)onPopViewDidClickMedal:(id)arg1;
- (void)showFirstChargeAlert;
- (void)recordOrPlayWithUserRole;
- (void)connectAndEntryChatRoom;
- (void)addSystemMessageWhenConnectingChatRoom;
- (void)reloadUIContent;
- (void)updateRoomTopAndBottom;
- (void)checkUpdateFllowTips;
- (void)createSubViews;
- (void)configChatArea;
- (void)configBottomFragment;
- (void)configTopFragment;
- (void)restartRecord;
- (void)addKVOObservers;
- (void)addNotificationObserver;
- (void)joinChatRoom;
- (id)defaultBgCoverImage;
- (void)onLiveRoomWillDisappear;
- (void)onLiveRoomWillAppear;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)back;
- (void)dealloc;
- (void)liveLovePanelClickBackControl:(id)arg1;
- (void)liveLovePanel:(id)arg1 longPressWithInfoItem:(id)arg2;
- (void)liveLovePanel:(id)arg1 clickActionWithInfoItem:(id)arg2;
- (void)liveRoomLoveModeGiftComboOver:(id)arg1;
- (void)liveRoomLoveModeGift:(id)arg1;
- (void)liveRoomLoveModeGiftDidSendSuccess:(id)arg1;
- (void)liveRoomLoveModePKRecvPKResultPanel:(id)arg1;
- (void)liveRoomLoveModePKRecvPKPanel:(id)arg1;
- (void)liveRoomLoveModePKCountDownTimeChanged:(long long)arg1;
- (void)liveRoomLoveModeFavorTimeRecvStart;
- (void)liveRoomLoveModeFavorTimeRecvInfo:(id)arg1;
- (void)liveRoomLoveModeFavorTimeRecvResult:(id)arg1;
- (void)liveRoomLoveModeControlRecvUserVoices:(id)arg1;
- (void)liveRoomLoveModeControlOnlineUserSync:(id)arg1 isOnMic:(_Bool)arg2;
- (void)liveRoomLoveModeControlMicWaitListUpdate:(id)arg1;
- (void)liveRoomLoveModeControlMicWaitListSync:(id)arg1;
- (void)loveModeChangeSeatStatus:(long long)arg1 index:(unsigned long long)arg2;
- (void)loveModeChangeMicStatusWithUser:(id)arg1 stageStatus:(long long)arg2 index:(unsigned long long)arg3;
- (void)loveModeKickOutUserWithUser:(id)arg1 index:(unsigned long long)arg2;
- (void)loveModeShowInfoMessageWithUser:(id)arg1 index:(unsigned long long)arg2;
- (void)loveModeSendGiftWithUser:(id)arg1 index:(unsigned long long)arg2;
- (void)bizEventHandler:(id)arg1 didClickMicQueueEntrance:(id)arg2;
- (void)onLovePlayModeChange:(id)arg1;
- (void)liveRoomPKRankChange:(id)arg1;
- (void)showPKResultAnimation:(id)arg1;
- (void)liveRoomPKResultRsp:(id)arg1;
- (void)liveRoomPKStateChange:(id)arg1 oldPKStatus:(int)arg2;
- (void)liveRoomPKPropPanelRsp:(id)arg1;
- (void)liveRoomPKPanelSyncRsp:(id)arg1;
- (void)liveRoomPKMicStatusRsp:(id)arg1;
- (void)liveRoomPKPanelScoreRsp:(id)arg1;
- (void)liveRoomPKControlRefreshCountDownTime:(long long)arg1;
- (void)liveRoomPKControlRefreshPropPanelCountDownTime:(long long)arg1;
- (void)liveRoomPKControlRefreshBuffPanel:(id)arg1;
- (void)pkArenaClickPKRank:(id)arg1;
- (void)pkArenaClickAtUserView:(long long)arg1 roomId:(long long)arg2 arenaView:(id)arg3;
- (void)updateGiftArea;
- (void)removePKArena;
- (void)showPKArena;
- (void)stackMenu:(id)arg1 didMoveAction:(id)arg2;
- (void)stackMenu:(id)arg1 didTouchItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)enableLoveMode:(_Bool)arg1;
- (void)enablePKMode:(_Bool)arg1 mode:(int)arg2;
- (void)enableBizWithLiveRoomType:(int)arg1 enable:(_Bool)arg2;
- (id)anchorTabItems;
- (id)audienceTabItems;
- (id)dataSourceForAnchor;
- (id)dataSourceForUser;
- (id)dataSourceForAdmin;
- (id)loveMicControlBtn;
- (void)hotwordsBtnPressed:(id)arg1;
- (id)fullTextInputView;
- (void)actionOnRecharge:(id)arg1 dockerView:(id)arg2;
- (void)actionOnMakeupCenter:(id)arg1 dockerView:(id)arg2;
- (void)actionOnShop:(id)arg1 dockerView:(id)arg2;
- (void)actionOnAnchorWishBill:(id)arg1 dockerView:(id)arg2;
- (void)moneyButtonClick;
- (void)actionOnMoney:(id)arg1 dockerView:(id)arg2;
- (void)actionOnPackage:(id)arg1 dockerView:(id)arg2;
- (void)onLoveModeDidSelected;
- (void)actionOnLovemodel:(id)arg1 dockerView:(id)arg2;
- (void)actionOnRedpackage:(id)arg1 dockerView:(id)arg2;
- (void)actionOnProhibit:(id)arg1 dockerView:(id)arg2;
- (void)actionOnManage:(id)arg1 dockerView:(id)arg2;
- (void)actionOnMicEmotion:(id)arg1 dockerView:(id)arg2;
- (void)actionOnLoveMicControl:(id)arg1 dockerView:(id)arg2;
- (void)actionOnMicControl:(id)arg1 dockerView:(id)arg2;
- (void)actionOnPhoto:(id)arg1 dockerView:(id)arg2;
- (void)actionOnTopic:(id)arg1 dockerView:(id)arg2;
- (void)actionOnBgm:(id)arg1 dockerView:(id)arg2;
- (void)actionOnPKList:(id)arg1 dockerView:(id)arg2;
- (void)hideDubPanelView;
- (void)showDubPanelView;
- (void)actionOnDubEffect:(id)arg1 dockerView:(id)arg2;
- (void)actionOnDubble:(id)arg1 dockerView:(id)arg2;
- (void)actionOnMicConnect:(id)arg1 dockerView:(id)arg2;
- (void)shareButtonClick;
- (void)actionOnShare:(id)arg1 dockerView:(id)arg2;
- (void)actionOnGift:(id)arg1 dockerView:(id)arg2;
- (void)textButtonClick;
- (void)actionOnInput:(id)arg1 dockerView:(id)arg2;
- (void)dockerView:(id)arg1 didSelectItem:(id)arg2 contentView:(id)arg3;
- (struct CGSize)dockerView:(id)arg1 sizeForItemAtIndex:(long long)arg2 item:(id)arg3 displayType:(long long)arg4;
- (_Bool)dockerView:(id)arg1 willDisplayItem:(id)arg2 inView:(id)arg3 displayType:(long long)arg4;
- (id)allToolsWillDisplay;
- (double)minimumInteritemSpacingForDockerView:(id)arg1 displayType:(long long)arg2;
- (_Bool)dockerViewWillDisplayExtraView:(id)arg1 sourceArray:(id)arg2;
- (void)bottomFragmentPrepareForReload:(id)arg1;
- (struct CGRect)layoutOfRoomCarouselOpsView;
- (struct CGRect)layoutOfRoomPrimaryOpsView;
- (struct CGRect)layoutOfMicStackMenu;
- (void)reLayoutLiveRoomUnits;
- (void)requestAnchorFansClub;
- (void)showMenusForPerson:(id)arg1;
- (void)requestPermissionForPerson:(id)arg1;
- (void)deleteUserFromAdmin:(long long)arg1;
- (void)addUserToAdmin:(long long)arg1;
- (void)enableUserSendMessage:(long long)arg1;
- (void)disableUserSendMessage:(long long)arg1;
- (id)p_layoutOfMsgType:(unsigned long long)arg1;
- (void)reloadJoinFansClubMsg;
- (void)singleBarrageWillJumpLiveRoom:(id)arg1 redirectType:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)singleBarrageShouldJump:(id)arg1;
- (void)inputView:(id)arg1 selectEmotion:(id)arg2;
- (void)inputViewWillChangeHeight:(id)arg1;
- (void)inputViewWillChangeFrame:(id)arg1;
- (void)inputView:(id)arg1 sendContent:(id)arg2;
- (_Bool)inputViewCanSelectNobleBullet:(id)arg1;
- (_Bool)inputViewCanSelectFansBullet:(id)arg1;
- (void)inputViewDidSelectBulletType:(id)arg1;
- (void)inputViewDidSwitchBullet:(id)arg1;
- (void)bulletAlertViewHide;
- (void)bulletAlertViewClickAction:(id)arg1;
- (void)requireShowGiftView;
- (void)giftPopViewCoverHeadDidPressed:(id)arg1;
- (void)onGiftViewNeedShowAnimation;
- (void)onGiftViewWillHide;
- (void)onGiftViewDidClickAdItem:(id)arg1;
- (void)onGiftViewDidClickPersonDetail:(id)arg1;
- (void)onRoomBulletMessageDidSendSucceed:(id)arg1;
- (void)onRoomConnectionStateChanged:(unsigned long long)arg1;
- (void)dealWithRoomEmojiMsg:(id)arg1;
- (void)dealWithRoomGiftMsgSp:(id)arg1;
- (void)dealWithBulletMsg:(id)arg1;
- (void)dealWithFloatScreenMsg:(id)arg1;
- (void)dealWithQueryRoomModeRsp:(id)arg1;
- (void)dealWithThirdTypeMessageOfWishBillFinish:(id)arg1;
- (void)dealWithThirdTypeMessageOfTrafficCard:(id)arg1;
- (void)dealWithThirdTypeMessageOfTimedRedPacket:(id)arg1;
- (void)dealWithThirdTypeMessageOfRemoveRedPackets:(id)arg1;
- (void)dealWithThirdTypeMessageOfNewRedPackets:(id)arg1;
- (void)dealWithThirdTypeMessageOfTemplateEffectAnim:(id)arg1;
- (void)dealWithThirdTypeMessageOfGiftPackageNew:(id)arg1;
- (void)dealWithThirdTypeMessageOfUpdateNoble:(id)arg1;
- (void)dealWithThirdTypeMessageOfUpdateFansClub:(id)arg1;
- (void)dealWithThirdTypeMessageOfGiftDidSendSuccess:(id)arg1;
- (void)dealWithThirdTypeMessageOfShowBillboard:(id)arg1;
- (void)dealWithThirdTypeMessageOfUpdateOperationTab:(id)arg1;
- (void)dealWithThirdTypeMessageOfUserInfoUpdate:(id)arg1;
- (void)dealWithThirdTypeMessageOfMICOnlineUserNotify:(id)arg1;
- (void)dealWithThirdTypeMessageOfLiveStatus:(id)arg1;
- (void)dealWithThirdTypeMessageOfActiveUsers:(id)arg1;
- (void)dealWithThirdTypeMessageOfGiftRank:(id)arg1;
- (void)dealWithThirdTypeMessageOfAnchorRank:(id)arg1;
- (void)dealWithThirdTypeMessageOfRemoveAdministrator:(id)arg1;
- (void)dealWithThirdTypeMessageOfAddAdministrator:(id)arg1;
- (void)dealWithThirdTypeMessageOfTopic:(id)arg1;
- (void)dealWithThirdTypeMessageOfGift:(id)arg1;
- (void)dealWithThirdTypeMessageOfGiftBox:(id)arg1;
- (void)onChatRoomReceiveSocketKickOut:(id)arg1;
- (void)tryToShowLayoutMsgAvatar;
- (void)processMsgLayoutMultiUserAvatar;
- (void)msgScrollViewEndScrolling:(id)arg1;
- (void)msgScrollViewWillBeginDragging:(id)arg1;
- (void)tapUrlOnSystemMsg:(id)arg1;
- (void)tapOnUserName:(id)arg1;
- (void)tapOnHonorLevelImage:(id)arg1;
- (void)msgLayoutReloaded:(id)arg1;
- (void)content:(id)arg1 tapAction:(id)arg2 text:(id)arg3 range:(struct _NSRange)arg4 rect:(struct CGRect)arg5;
- (void)clickSendFailBtnForCell:(id)arg1;
- (void)showAnthorInfoView:(id)arg1;
- (void)clickAtMsgPic:(id)arg1;
- (void)clickAtAvatorForCell:(id)arg1;
- (void)tapInContentForCell:(id)arg1;
- (void)tapOutContentForCell:(id)arg1;
- (void)longPressedOnAvatorForCell:(id)arg1;
- (void)didSelectCell:(id)arg1;
- (void)XMLiveRadioPlayerDidPaused:(id)arg1;
- (void)XMLiveRadioPlayerDidStopped:(id)arg1;
- (void)XMLiveRadioPlayerDidPlaying:(id)arg1;
- (void)XMLiveRadioPlayerDidStart:(id)arg1;
- (void)XMLiveRadioPlayerWillStart:(id)arg1;
- (void)XMLivePlayerDidDataBufferEnd:(id)arg1;
- (void)XMLivePlayerDidDataBufferStart:(id)arg1;
- (void)XMLiveRadioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)openPackageForFreeGift:(id)arg1;
- (void)showFreeGiftPopView:(id)arg1;
- (void)checkNewUserFreeGift;
- (void)checkNeedPopChargeRequest;
- (void)checkChargeNotice;
- (void)changeLiveToStart;
- (void)onLoadPlayAddressCompletion:(id)arg1;
- (void)loadLivePlayAddress;
- (void)loadRtmpAddressAndStartPush;
- (void)loadRtmpAndChangeStatus;
- (void)loadAnchorRankDetail;
- (void)onlineNobleDidClickQA;
- (void)onlineNobleOperateDidClick:(id)arg1;
- (void)onlineNobleDidSelect:(id)arg1;
- (void)liveHotCardDidCilckMore:(id)arg1;
- (void)liveHotCardDidCilckCard:(id)arg1 fromSection:(id)arg2 atIndex:(long long)arg3;
- (void)onLiveBackAlertCloseWithMinize:(id)arg1;
- (void)onLiveBackAlertCloseWithExit:(id)arg1;
- (void)onAlertDidHide:(id)arg1;
- (void)liveRoomTopViewPKRankClicked:(id)arg1;
- (void)liveRoomTopViewNobleClicked:(id)arg1;
- (void)liveRoomTopViewEndLiveClicked:(id)arg1;
- (void)liveRoomTopViewShareClicked:(id)arg1;
- (void)liveRoomTopViewGotoAnchorRank:(id)arg1;
- (void)liveRoomTopViewFansClubClicked:(id)arg1;
- (void)liveRoomTopViewFollowClicked:(id)arg1;
- (void)liveRoomTopViewAvatarClicked:(id)arg1;
- (void)liveRoomTopViewTopicClicked:(id)arg1;
- (void)liveRoomTopViewGiftRankClicked:(id)arg1;
- (void)liveRoomTopViewDidTapRankView:(id)arg1;
- (void)showExitAlertView;
- (void)liveRoomTopViewBack:(id)arg1;
- (void)liveRoomTopViewIncomeRecordClicked:(id)arg1;
- (void)micAuthorizationError;
- (void)onLivingDuration:(double)arg1;
- (void)onPlayStateUpdate:(int)arg1 streamID:(id)arg2;
- (void)onPublishStateUpdate:(int)arg1 streamID:(id)arg2 streamInfo:(id)arg3;
- (void)onKickOut:(int)arg1 roomID:(id)arg2;
- (void)onLoginRoom:(int)arg1 roomID:(id)arg2;
- (void)onDisconnect:(int)arg1 roomID:(id)arg2;

// Remaining properties
@property(retain, nonatomic) XMLiveRoomApproachInfo *approachInfo;
@property(retain, nonatomic) XMLiveRoomBottomFragment *bottomFragment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) XMLiveRoomInputView *roomInputView;
@property(nonatomic) __weak XMLiveRoomGroupController *superViewCtrl;
@property(readonly) Class superclass;
@property(retain, nonatomic) XMLiveRoomTopView *topFragment;

@end

