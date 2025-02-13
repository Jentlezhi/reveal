//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBIMBundle, WBIMUser;
@protocol OS_dispatch_semaphore;

@interface WBIMInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    WBIMBundle *_bundle;
    WBIMUser *_user;
    long long _platform;
    NSString *_version;
}

+ (id)currentInfo;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) WBIMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) WBIMBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (void)changeBundle:(id)arg1;
- (void)changeUser:(id)arg1;
- (void)configInfo:(id)arg1 user:(id)arg2;
- (id)init;

@end

