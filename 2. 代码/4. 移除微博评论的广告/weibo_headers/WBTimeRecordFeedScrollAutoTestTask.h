//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimeRecordAutoScrollTestTask.h"

@interface WBTimeRecordFeedScrollAutoTestTask : WBTimeRecordAutoScrollTestTask
{
    _Bool _feedOrHot;
}

+ (unsigned long long)taskType;
@property(nonatomic) _Bool feedOrHot; // @synthesize feedOrHot=_feedOrHot;
- (id)supportRecordTypes;
- (void)gotoTestSceneAfterTaskIfNeeded:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)gotoTestSceneBeforTaskIfNeeded:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)_isCurrentInHomeViewController:(id)arg1;
- (_Bool)checkGroupId:(id)arg1;
- (_Bool)checkUICode:(id)arg1 targetSourceType:(long long *)arg2;
- (_Bool)checkUICode:(id)arg1;
- (id)init;

@end

