//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMGiftAdItem, XMGiftPackageItem, XMLiveGiftItem, XMLiveUser;

@protocol XMGiftViewManagerDelegate <NSObject>

@optional
- (void)onGiftDidSendFailure:(XMLiveGiftItem *)arg1 errorCode:(long long)arg2 msg:(NSString *)arg3;
- (void)onGiftDidSendSuccess:(XMLiveGiftItem *)arg1 quantity:(long long)arg2 rank:(long long)arg3;
- (void)onPackageDidSendSuccess:(XMGiftPackageItem *)arg1 quantity:(long long)arg2;
- (_Bool)onGiftViewShouldHideCharmValue;
- (void)onGiftViewDidClickAdItem:(XMGiftAdItem *)arg1;
- (void)onGiftViewDidClickPersonDetail:(XMLiveUser *)arg1;
- (void)onGiftViewDidClickRank;
- (void)onGiftViewNeedShowAnimation;
- (void)onGiftViewWillHide;
@end

