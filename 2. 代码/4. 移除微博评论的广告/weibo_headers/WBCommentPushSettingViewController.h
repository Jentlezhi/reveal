//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@class WBAccountPushSettings, WBCustomSwitchControl;
@protocol WBCommentPushSettingViewControllerDelegate;

@interface WBCommentPushSettingViewController : WBTableViewController
{
    WBCustomSwitchControl *commonCmtSwitchCtrl;
    _Bool hasChanged;
    long long lineCount;
    _Bool _showNewPage;
    WBAccountPushSettings *pushSetting;
    id <WBCommentPushSettingViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool showNewPage; // @synthesize showNewPage=_showNewPage;
@property(nonatomic) id <WBCommentPushSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBAccountPushSettings *pushSetting; // @synthesize pushSetting;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)configSubviewsFrame;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadPrivacySetting;
- (void)_jumpToH5WithURL:(id)arg1;
- (void)didSelectNoticeSectionWithIndexPath:(id)arg1;
- (int)pushPeoPleRangeType;
- (void)commonCmtSwitch:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)saveSettings;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

