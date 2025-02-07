//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALiApplinkBridge : NSObject
{
    id _applink;
    NSString *_applinkClassName;
    NSString *_instanceSelector;
    NSString *_setBaichuanParam;
    NSString *_setTaokePidParam;
    NSString *_setBackUrlParam;
    NSString *_jumpDetail;
    NSString *_jumpShop;
    NSString *_jumpUrl;
}

+ (_Bool)isAppLinkAvailable;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *jumpShop; // @synthesize jumpShop=_jumpShop;
@property(copy, nonatomic) NSString *jumpDetail; // @synthesize jumpDetail=_jumpDetail;
@property(copy, nonatomic) NSString *setBackUrlParam; // @synthesize setBackUrlParam=_setBackUrlParam;
@property(copy, nonatomic) NSString *setTaokePidParam; // @synthesize setTaokePidParam=_setTaokePidParam;
@property(copy, nonatomic) NSString *setBaichuanParam; // @synthesize setBaichuanParam=_setBaichuanParam;
@property(copy, nonatomic) NSString *instanceSelector; // @synthesize instanceSelector=_instanceSelector;
@property(copy, nonatomic) NSString *applinkClassName; // @synthesize applinkClassName=_applinkClassName;
@property(retain, nonatomic) id applink; // @synthesize applink=_applink;
- (void).cxx_destruct;
- (id)appendYbhpssIfNeed:(id)arg1 ybhpssString:(id)arg2;
- (_Bool)tryJumpingToUrl:(id)arg1 params:(id)arg2;
- (_Bool)tryJumpingToTBShop:(id)arg1 params:(id)arg2;
- (void)utTrack:(id)arg1 result:(id)arg2;
- (void)monitorApplink:(id)arg1 error:(id)arg2;
- (_Bool)jumpDetail:(id)arg1 params:(id)arg2 taokeParams:(id)arg3;
- (void)setBackUrl:(id)arg1;
- (void)setPid:(id)arg1;
- (void)setTTID:(id)arg1 utdid:(id)arg2 tag:(id)arg3 source:(id)arg4;
- (void)initWithAppkey:(id)arg1;
- (id)init;

@end

