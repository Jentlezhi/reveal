//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubShowMSBannerCollectionViewCellModel : XMModel
{
    NSString *_actionStr;
    NSString *_conetentTitle;
    NSString *_bannerStr;
    long long _bannerId;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long bannerId; // @synthesize bannerId=_bannerId;
@property(copy, nonatomic) NSString *bannerStr; // @synthesize bannerStr=_bannerStr;
@property(copy, nonatomic) NSString *conetentTitle; // @synthesize conetentTitle=_conetentTitle;
@property(copy, nonatomic) NSString *actionStr; // @synthesize actionStr=_actionStr;
- (void).cxx_destruct;

@end

