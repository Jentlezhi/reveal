//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMessageSettingAdapter.h"

@interface WBUnfollowMessageSettingAdapter : WBMessageSettingAdapter
{
}

- (void)clearEventaAtIndexPath:(id)arg1;
- (void)changeRemindModeEvent:(long long)arg1 atIndexPath:(id)arg2;
- (void)changeShowStyleEvent:(long long)arg1 atIndexPath:(id)arg2;
- (void)enableSwitchAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)textForFooterInSection:(long long)arg1;
- (id)textForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)dotWarningFooterView;
- (long long)getSectionNumbers;

@end

