//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubTabModel : XMModel
{
    _Bool _firstShowOrNot;
    long long _tagId;
    NSString *_tabTitle;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(nonatomic) _Bool firstShowOrNot; // @synthesize firstShowOrNot=_firstShowOrNot;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end

