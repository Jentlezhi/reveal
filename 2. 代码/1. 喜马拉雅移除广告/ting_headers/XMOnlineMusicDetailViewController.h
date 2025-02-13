//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "AVAudioPlayerDelegate-Protocol.h"
#import "XMOnlineMusicDetailTableViewCellDelegate-Protocol.h"
#import "XMOnlineMusicPageLogicDelegate-Protocol.h"

@class HMSegmentedControl, NSArray, NSMutableArray, NSString, NSTimer, UILabel, UIView, XMAccompanyPlayer, XMNetSoundItem, XMOnlineBGMCategory, XMOnlineMusicPageLogic;
@protocol XMOnlineMusicDetailViewControllerDelegate;

@interface XMOnlineMusicDetailViewController : XMBaseTabelVC <AVAudioPlayerDelegate, XMOnlineMusicDetailTableViewCellDelegate, XMOnlineMusicPageLogicDelegate>
{
    _Bool _allowMultipleSelection;
    int _placeholderDataCount;
    XMOnlineBGMCategory *_musicCategory;
    id <XMOnlineMusicDetailViewControllerDelegate> _delegate;
    long long _sceneType;
    NSString *_sourceName;
    NSMutableArray *_onlineMusicArray;
    NSMutableArray *_markedArray;
    NSTimer *_bgPlayerTime;
    XMAccompanyPlayer *_bgPlayer;
    XMNetSoundItem *_preListenSound;
    id _timeObserver;
    NSMutableArray *_batchDownloadArray;
    NSMutableArray *_singleDownloadingArray;
    XMNetSoundItem *_lastDownloadSound;
    HMSegmentedControl *_segmentedControl;
    UILabel *_subCategoryLbl;
    UILabel *_conditionLbl;
    XMOnlineMusicPageLogic *_currentPageLogic;
    UIView *_filterView;
    NSArray *_pageLogicArray;
    NSString *_sortKey;
}

@property(retain, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(retain, nonatomic) NSArray *pageLogicArray; // @synthesize pageLogicArray=_pageLogicArray;
@property(retain, nonatomic) UIView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) XMOnlineMusicPageLogic *currentPageLogic; // @synthesize currentPageLogic=_currentPageLogic;
@property(retain, nonatomic) UILabel *conditionLbl; // @synthesize conditionLbl=_conditionLbl;
@property(retain, nonatomic) UILabel *subCategoryLbl; // @synthesize subCategoryLbl=_subCategoryLbl;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) int placeholderDataCount; // @synthesize placeholderDataCount=_placeholderDataCount;
@property(copy, nonatomic) XMNetSoundItem *lastDownloadSound; // @synthesize lastDownloadSound=_lastDownloadSound;
@property(retain, nonatomic) NSMutableArray *singleDownloadingArray; // @synthesize singleDownloadingArray=_singleDownloadingArray;
@property(retain, nonatomic) NSMutableArray *batchDownloadArray; // @synthesize batchDownloadArray=_batchDownloadArray;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) XMNetSoundItem *preListenSound; // @synthesize preListenSound=_preListenSound;
@property(retain, nonatomic) XMAccompanyPlayer *bgPlayer; // @synthesize bgPlayer=_bgPlayer;
@property(retain, nonatomic) NSTimer *bgPlayerTime; // @synthesize bgPlayerTime=_bgPlayerTime;
@property(retain, nonatomic) NSMutableArray *markedArray; // @synthesize markedArray=_markedArray;
@property(retain, nonatomic) NSMutableArray *onlineMusicArray; // @synthesize onlineMusicArray=_onlineMusicArray;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(nonatomic) __weak id <XMOnlineMusicDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMOnlineBGMCategory *musicCategory; // @synthesize musicCategory=_musicCategory;
- (void).cxx_destruct;
- (void)playbackFinished:(id)arg1;
- (double)availableDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)netSoundDownloadSuccess:(id)arg1;
- (double)getCurrentPlayingTime;
- (void)addObserver;
- (void)removeObserver;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)isLoadMoreViewNeeded;
- (void)startDataLoad;
- (void)loadMore;
- (void)pullToRefresh;
- (void)XMOnlineMusicPageLogic:(id)arg1 didLoadPageIndex:(long long)arg2 succ:(_Bool)arg3;
- (void)updateNumberLabel;
- (_Bool)isCurrentlyPlayingItem:(id)arg1;
- (void)addSelectedStatusRecord:(id)arg1 andWillSelected:(_Bool)arg2;
- (void)addPlayStatusRecord:(id)arg1 andWillPlay:(_Bool)arg2;
- (void)preListenSound:(id)arg1;
- (void)selectSound:(id)arg1;
- (_Bool)downloadSound:(id)arg1;
- (void)postAddStatistic;
- (_Bool)emptyData;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sortIfNeeded;
- (void)latestBtnDidTap:(id)arg1;
- (void)hotBtnBtnDidTap:(id)arg1;
- (_Bool)downloadSingleSound:(id)arg1;
- (_Bool)wifiUnavailable;
- (void)batchDownload;
- (void)cancelBtnDidTap:(id)arg1;
- (void)downloadAllBtnDidTap:(id)arg1;
- (void)segmentedControlChangedValue:(id)arg1;
- (id)conditionStrWithHighlightStr:(id)arg1;
- (void)addSubcategoryTabView;
- (void)showMusicTooLargeAlert;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)onBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupPageLogic;
- (void)viewDidLoad;
- (void)didInitialize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCategory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

