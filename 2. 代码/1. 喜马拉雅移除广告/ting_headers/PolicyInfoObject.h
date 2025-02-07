//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABQIdentifier, NSArray, NSString;

@interface PolicyInfoObject : NSObject
{
    ABQIdentifier *_appName;
    NSString *_policyVersion;
    NSString *_downloadURI;
    NSArray *_policyArray;
}

+ (id)createPolicyInfoObjectWithPlist:(id)arg1;
+ (id)createPolicyInfoObject;
@property(retain, nonatomic) NSArray *policyArray; // @synthesize policyArray=_policyArray;
@property(retain, nonatomic) NSString *downloadURI; // @synthesize downloadURI=_downloadURI;
@property(retain, nonatomic) NSString *policyVersion; // @synthesize policyVersion=_policyVersion;
@property(retain, nonatomic) ABQIdentifier *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)savePoliciesLocally;
- (void)saveDownloadedPolicy:(id)arg1;
- (void)savePolicyInfoProperties:(id)arg1;
- (void)fetchDataIntoObj:(id)arg1;
- (id)init;

@end

