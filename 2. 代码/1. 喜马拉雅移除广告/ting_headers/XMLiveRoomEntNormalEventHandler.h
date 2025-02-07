//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMLiveEntAnchorMicListViewDelegate-Protocol.h"
#import "XMLiveEntAudienceMicListViewDelegate-Protocol.h"
#import "XMLiveEntMicFloatPanelDelegate-Protocol.h"
#import "XMLiveEntPlayGroundNormalDelegate-Protocol.h"
#import "XMLiveEntRadioAudienceMicListViewDelegate-Protocol.h"
#import "XMLiveEntRankPopViewDelegate-Protocol.h"
#import "XMLiveGPFightInfoViewDelegate-Protocol.h"
#import "XMLiveNobleHideAlertViewDelegate-Protocol.h"
#import "XMLiveRoomEntEventHandlerBaseAbility-Protocol.h"
#import "XMLiveRoomEntMicManagerDelegate-Protocol.h"
#import "XMLiveRoomEntNormalEventHandlerProtocol-Protocol.h"

@class NSString, XMBaseVC, XMLiveEntAnchorMicListView, XMLiveEntAudienceMicListView, XMLiveEntMicFloatPanel, XMLiveEntPlayModePopView, XMLiveRoomEntApproachInfo;
@protocol XMLiveRoomEntNormalEventHandlerFeedBackDelegate;

@interface XMLiveRoomEntNormalEventHandler : NSObject <XMLiveEntAnchorMicListViewDelegate, XMLiveGPFightInfoViewDelegate, XMLiveNobleHideAlertViewDelegate, XMLiveRoomEntEventHandlerBaseAbility, XMLiveRoomEntMicManagerDelegate, XMLiveRoomEntNormalEventHandlerProtocol, XMLiveEntPlayGroundNormalDelegate, XMLiveEntRankPopViewDelegate, XMLiveEntAudienceMicListViewDelegate, XMLiveEntMicFloatPanelDelegate, XMLiveEntRadioAudienceMicListViewDelegate>
{
    id _hookDelegate;
    id <XMLiveRoomEntNormalEventHandlerFeedBackDelegate> _feedbackDelegate;
    XMLiveRoomEntApproachInfo *_approachInfo;
    XMBaseVC *_rootVC;
    XMLiveEntAnchorMicListView *_anchorMicList;
    XMLiveEntAudienceMicListView *_audienceMicList;
    XMLiveEntMicFloatPanel *_entMicFloatPanel;
    XMLiveEntPlayModePopView *_entPlayModePanel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveEntPlayModePopView *entPlayModePanel; // @synthesize entPlayModePanel=_entPlayModePanel;
@property(retain, nonatomic) XMLiveEntMicFloatPanel *entMicFloatPanel; // @synthesize entMicFloatPanel=_entMicFloatPanel;
@property(retain, nonatomic) XMLiveEntAudienceMicListView *audienceMicList; // @synthesize audienceMicList=_audienceMicList;
@property(retain, nonatomic) XMLiveEntAnchorMicListView *anchorMicList; // @synthesize anchorMicList=_anchorMicList;
@property(nonatomic) __weak XMBaseVC *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) XMLiveRoomEntApproachInfo *approachInfo; // @synthesize approachInfo=_approachInfo;
@property(nonatomic) __weak id <XMLiveRoomEntNormalEventHandlerFeedBackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(nonatomic) __weak id hookDelegate; // @synthesize hookDelegate=_hookDelegate;
- (void)clanFightViewDidClickPlusTime;
- (void)clanFightViewDidClickStopFight;
- (void)clanFightViewDidClickStartFight;
- (void)entMicFloatPanelDidClick;
- (void)entRadioAudienceMicListDidClickLeaveMic:(id)arg1 roleType:(int)arg2;
- (void)entRadioAudienceMicListDidClickJoinMic:(id)arg1 roleType:(int)arg2;
- (void)entAudienceMicListDidClickLeaveMic:(id)arg1 roleType:(long long)arg2;
- (void)entAudienceMicListDidClickJoinMic:(id)arg1 roleType:(long long)arg2;
- (void)entAudienceMicListWillDismiss:(id)arg1;
- (void)entAnchorMicListDidClickClearCharmValue:(id)arg1;
- (void)entAnchorMicListDidClickHangUpJoinMic:(id)arg1 userId:(long long)arg2;
- (void)entAnchorMicListDidClickAcceptJoinMic:(id)arg1 userId:(long long)arg2;
- (void)entPlayGroundDidClickFansBoard:(id)arg1 status:(long long)arg2 roleType:(long long)arg3 userInfo:(id)arg4 fansInfo:(id)arg5;
- (void)entPlayGroundDidLongPressUnit:(id)arg1 status:(long long)arg2 roleType:(long long)arg3 userInfo:(id)arg4 index:(long long)arg5;
- (void)entPlayGroundDidClickUnit:(id)arg1 status:(long long)arg2 roleType:(long long)arg3 userInfo:(id)arg4 index:(long long)arg5;
- (void)entPlayGroundDidClickBackAction:(id)arg1;
- (void)entRankPopViewDidClickOpenGuardian:(id)arg1;
- (void)entRankPopViewDidClickUser:(id)arg1 popView:(id)arg2;
- (void)nobleHideAlertViewClickedConfirm:(id)arg1;
- (void)entMicMgrRecvHatMsg:(id)arg1;
- (void)entMicMgrRecvPresideJoinSuccess;
- (void)entMicMgrRecvBattleResultPanel:(id)arg1;
- (void)entMicMgrOnlineUserSync:(id)arg1 selfOnMic:(_Bool)arg2;
- (void)entMicMgrBattleCountDownTimeChanged:(long long)arg1;
- (void)entMicMgrBattlePanelInfoSync:(id)arg1;
- (void)entMicMgrMicWaitListUpdate:(id)arg1;
- (void)entMicMgrMicWaitListSync:(id)arg1;
- (void)entMicMgrDidSendGiftSuccess:(id)arg1;
- (void)entMicMgrRecvGift:(id)arg1;
- (void)showGiftPanel:(long long)arg1;
- (id)allOnlineMicUserList;
- (id)transformOnlineUserRspToLiveUser:(id)arg1;
- (id)showEntPlayModePanel:(long long)arg1;
- (id)anchorMicFloatPanel;
- (id)showAnchorMicListPanel;
- (id)showAudienceMicListPanel:(long long)arg1;
- (void)terminate;
- (void)customInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

