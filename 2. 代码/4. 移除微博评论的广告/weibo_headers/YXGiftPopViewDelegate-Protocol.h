//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YXGiftPopView, YXGiftTypeModel;

@protocol YXGiftPopViewDelegate <NSObject>

@optional
- (void)giftPopViewPrivilegeGiftGuide:(YXGiftPopView *)arg1 giftTypeModel:(YXGiftTypeModel *)arg2;
- (void)giftPopViewLongPressed:(YXGiftPopView *)arg1 giftTypeModel:(YXGiftTypeModel *)arg2;
- (_Bool)giftPopViewIsInPkTurnMic;
- (void)giftPopViewDidSelectGift:(YXGiftPopView *)arg1 giftTypeModel:(YXGiftTypeModel *)arg2;
- (void)giftPopViewDidTapBGView:(YXGiftPopView *)arg1;
@end

