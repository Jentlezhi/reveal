//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YZPlatformModel : NSObject
{
    NSString *_appId;
    NSString *_sdkType;
    NSString *_sdkVersion;
}

@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *sdkType; // @synthesize sdkType=_sdkType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initWithJson:(id)arg1;
- (id)initWithAppId:(id)arg1 sdkType:(id)arg2 sdkVersion:(id)arg3;

@end

