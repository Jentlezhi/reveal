//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YZBDataBuilder : NSObject
{
}

+ (id)buildSignFor:(id)arg1 key:(id)arg2;
+ (id)buildRedEnvelopPaySignFor:(id)arg1;
+ (id)buildPaySignFor:(id)arg1;
+ (id)buildLoginParamForStr:(id)arg1;
+ (id)buildPayParamForStr:(id)arg1;
+ (id)buildSecdataWithMemberID:(long long)arg1 did:(id)arg2 appID:(id)arg3 sdkID:(id)arg4 adid:(id)arg5 appFrom:(id)arg6 netStatus:(long long)arg7 latitude:(id)arg8 longitude:(id)arg9 deviceToken:(id)arg10 accessToken:(id)arg11 versions:(id)arg12 simType:(id)arg13;
+ (id)buildSecdataWithUserInfo:(id)arg1;

@end

