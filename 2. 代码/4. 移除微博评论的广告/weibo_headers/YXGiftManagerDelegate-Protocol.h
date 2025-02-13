//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, UIView, YXGiftManager, YXGiftModel, YXGiftTypeModel;
@protocol WBNLDiversionModelable;

@protocol YXGiftManagerDelegate <NSObject>

@optional
- (_Bool)giftManagerCurrentRoomTypeIsPlayerAudienceRoom;
- (_Bool)giftManagerShortCutViewShouldChangeAngles:(YXGiftManager *)arg1;
- (void)giftManagerPrivilegeGiftGuide:(YXGiftManager *)arg1 giftTypeModel:(YXGiftTypeModel *)arg2;
- (void)giftManagerLongPressed:(YXGiftManager *)arg1 giftTypeModel:(YXGiftTypeModel *)arg2;
- (void)giftManager:(YXGiftManager *)arg1 GuardGiftAnimationViewClick:(UIView *)arg2;
- (_Bool)giftManagerDisableGuardGiftAnimationView:(YXGiftManager *)arg1;
- (void)giftManager:(YXGiftManager *)arg1 didShow:(UIView *)arg2;
- (void)giftManager:(YXGiftManager *)arg1 willDismiss:(UIView *)arg2;
- (void)giftManager:(YXGiftManager *)arg1 willShow:(UIView *)arg2;
- (NSString *)giftManagerCurrentToID:(YXGiftManager *)arg1;
- (void)giftPanelDidDismiss:(void (^)(void))arg1 animation:(_Bool)arg2;
- (void)giftManager:(YXGiftManager *)arg1 didDismiss:(UIView *)arg2;
- (void)giftManagerDidBuyDanmaku:(YXGiftManager *)arg1 message:(NSString *)arg2 goldcoin:(long long)arg3 responseObject:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)giftManagerDidBuyGift:(YXGiftManager *)arg1 model:(YXGiftTypeModel *)arg2 goldcoin:(long long)arg3 responseObject:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)giftManagerDidSelectGift:(YXGiftManager *)arg1 model:(YXGiftTypeModel *)arg2;
- (void)giftManagerNeedSendRedPacket:(YXGiftManager *)arg1 model:(YXGiftTypeModel *)arg2;
- (void)dismissGiftPanel:(void (^)(void))arg1 animation:(_Bool)arg2;
- (void)didConsumeGoldcoin;
- (void)dimissGiftSpendPanel;
- (_Bool)shouldShowDiversionView;
- (id <WBNLDiversionModelable>)diversionModel;
- (_Bool)giftManagerCurrentLiveIsTurnMicPK:(YXGiftManager *)arg1;
- (_Bool)liveIsPKing;
- (NSString *)pkLiveControllerType;
- (NSString *)liveControllerPKId;
- (void)giftPopViewPopCoinDidClick;
- (void)didTapUserHeadView:(YXGiftModel *)arg1;
- (void)didDismissGuardPendant;
- (void)didShowGuardPendant;
- (void)didReloadGiftShortcut;
- (void)hideORshowBG:(_Bool)arg1;
@end

