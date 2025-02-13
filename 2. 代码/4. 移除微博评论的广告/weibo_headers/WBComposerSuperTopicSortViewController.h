//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposerBaseSortViewController.h"

@class NSString, UIView, WBStatusComposeViewController;

@interface WBComposerSuperTopicSortViewController : WBComposerBaseSortViewController
{
    _Bool _showSyncSwitch;
    _Bool _syncSwitchOn;
    _Bool _dismissSelf;
    _Bool _baseComposerHasSavedDraft;
    WBStatusComposeViewController *_baseComposer;
    UIView *_syncSwitchView;
    NSString *_currentSelectScheme;
}

@property(nonatomic) _Bool baseComposerHasSavedDraft; // @synthesize baseComposerHasSavedDraft=_baseComposerHasSavedDraft;
@property(nonatomic) _Bool dismissSelf; // @synthesize dismissSelf=_dismissSelf;
@property(retain, nonatomic) NSString *currentSelectScheme; // @synthesize currentSelectScheme=_currentSelectScheme;
@property(nonatomic) _Bool syncSwitchOn; // @synthesize syncSwitchOn=_syncSwitchOn;
@property(nonatomic) _Bool showSyncSwitch; // @synthesize showSyncSwitch=_showSyncSwitch;
@property(retain, nonatomic) UIView *syncSwitchView; // @synthesize syncSwitchView=_syncSwitchView;
@property(nonatomic) __weak WBStatusComposeViewController *baseComposer; // @synthesize baseComposer=_baseComposer;
- (void).cxx_destruct;
- (void)handleWBQueueJobFinishedNotification:(id)arg1;
- (void)handleComposerWillDismissNotification:(id)arg1;
- (void)didSelectTopic:(id)arg1 fromTopicSort:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)dataApiPath;
- (id)sortApiPath;
- (id)topicDataCacheKey;
- (id)topicSortCacheKey;
- (void)dismissSelfAndBaseComposer;
- (void)configSyncSwitch;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

@end

