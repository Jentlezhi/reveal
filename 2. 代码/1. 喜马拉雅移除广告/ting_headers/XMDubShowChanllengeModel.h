//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubShowChanllengeModel : XMModel
{
    _Bool _topicIdNew;
    unsigned long long _topicId;
    unsigned long long _themeId;
    NSString *_name;
    NSString *_desc;
    unsigned long long _jointCount;
    long long _templateId;
    long long _status;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool topicIdNew; // @synthesize topicIdNew=_topicIdNew;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) unsigned long long jointCount; // @synthesize jointCount=_jointCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long themeId; // @synthesize themeId=_themeId;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;

@end

