//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBResidenceRecorderProtocol-Protocol.h"

@class NSString, WBTimeRecordUploader;

@interface WBFeedResidenceTimeRecorder : NSObject <WBResidenceRecorderProtocol>
{
    WBTimeRecordUploader *_delayUploader;
}

+ (id)_sharedInstance;
+ (void)registRecorder;
@property(retain, nonatomic) WBTimeRecordUploader *delayUploader; // @synthesize delayUploader=_delayUploader;
- (void).cxx_destruct;
- (void)residenceLogTimeRecord:(id)arg1;
- (void)residenceViewcontroller:(id)arg1 recordDidappear:(id)arg2;
- (void)residenceViewcontroller:(id)arg1 recordAppear:(id)arg2;
- (id)residenceViewControllerID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

