//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XMVipGuideButtonMessageInfo, XMVipPromotionMessageItem, XMVipRightsExplanationVoInfo;

@interface XMBatchSelectTrackItem : NSObject
{
    _Bool _isAutoBuy;
    long long _albumId;
    NSString *_albumTitle;
    unsigned long long _vipFreeTypeId;
    double _balanceAmount;
    NSArray *_batchChooseTracksVos;
    NSString *_currentTrackTitle;
    unsigned long long _currentSelectedIndex;
    XMVipPromotionMessageItem *_vipPromotionMessageVo;
    XMVipGuideButtonMessageInfo *_vipButtonMessageInfo;
    XMVipRightsExplanationVoInfo *_vipRightsExplanationVoInfo;
}

+ (id)itemFromDic:(id)arg1;
@property(retain, nonatomic) XMVipRightsExplanationVoInfo *vipRightsExplanationVoInfo; // @synthesize vipRightsExplanationVoInfo=_vipRightsExplanationVoInfo;
@property(retain, nonatomic) XMVipGuideButtonMessageInfo *vipButtonMessageInfo; // @synthesize vipButtonMessageInfo=_vipButtonMessageInfo;
@property(nonatomic) _Bool isAutoBuy; // @synthesize isAutoBuy=_isAutoBuy;
@property(retain, nonatomic) XMVipPromotionMessageItem *vipPromotionMessageVo; // @synthesize vipPromotionMessageVo=_vipPromotionMessageVo;
@property(nonatomic) unsigned long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(copy, nonatomic) NSString *currentTrackTitle; // @synthesize currentTrackTitle=_currentTrackTitle;
@property(retain, nonatomic) NSArray *batchChooseTracksVos; // @synthesize batchChooseTracksVos=_batchChooseTracksVos;
@property(nonatomic) double balanceAmount; // @synthesize balanceAmount=_balanceAmount;
@property(nonatomic) unsigned long long vipFreeTypeId; // @synthesize vipFreeTypeId=_vipFreeTypeId;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;

@end

