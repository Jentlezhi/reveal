//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTBLiveBaseComponent.h"

#import "WBTBWebsocketManagerDelegate-Protocol.h"
#import "WBTBWebsocketReceiverDelegate-Protocol.h"

@class NSString, WBTBLiveRoomTaobaoController, WBTBLiveTopInfoPanel, WBTBWebsocketReceiver, YXLTopInfoPanelViewModel;

@interface WBTBAccountInfoComponent : WBTBLiveBaseComponent <WBTBWebsocketReceiverDelegate, WBTBWebsocketManagerDelegate>
{
    _Bool _hasInjectedRoomInitialData;
    WBTBWebsocketReceiver *_websocketReceiver;
    WBTBLiveTopInfoPanel *_topInfoPanel;
    YXLTopInfoPanelViewModel *_topInfoPanelViewModel;
    WBTBLiveRoomTaobaoController *_taobaoController;
}

@property(retain, nonatomic) WBTBLiveRoomTaobaoController *taobaoController; // @synthesize taobaoController=_taobaoController;
@property(nonatomic) _Bool hasInjectedRoomInitialData; // @synthesize hasInjectedRoomInitialData=_hasInjectedRoomInitialData;
@property(retain, nonatomic) YXLTopInfoPanelViewModel *topInfoPanelViewModel; // @synthesize topInfoPanelViewModel=_topInfoPanelViewModel;
@property(retain, nonatomic) WBTBLiveTopInfoPanel *topInfoPanel; // @synthesize topInfoPanel=_topInfoPanel;
@property(retain, nonatomic) WBTBWebsocketReceiver *websocketReceiver; // @synthesize websocketReceiver=_websocketReceiver;
- (void).cxx_destruct;
- (void)followStatusUpdated:(id)arg1;
- (void)updateUserInfoWithWBTBLiveInfo:(id)arg1;
- (void)updateContentWithRoomInitialData:(id)arg1;
- (void)yxLiveModelUpdated:(id)arg1;
- (void)wbtbLiveInfoUpdated:(id)arg1;
- (void)onInLiveRoomMsgResponse:(id)arg1;
- (void)updateTopInfoPanelFollowStatus:(id)arg1;
- (_Bool)isInCorrectRoom:(id)arg1;
- (void)updateFollowButton:(id)arg1;
- (void)audienceCountDidUpdate:(long long)arg1;
- (void)buildTopInfoPanel;
- (void)webSocketManager:(id)arg1 didObtainIMRoomInitialData:(id)arg2;
- (void)onReceiveMesssage:(unsigned long long)arg1 extData:(id)arg2;
- (void)injectRoomInitialData;
- (void)setupSubViews;
- (void)onCreate;
- (void)show:(id)arg1;
- (id)identifier;
- (void)cleanWebsocketReceiver;
- (void)initWebsocketReceiver;
- (void)onDestroy;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

