//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBStoryMusicEditViewControllerDelegate-Protocol.h"
#import "WBStoryMusicTableViewCellDelegate-Protocol.h"
#import "WBStorySaveProgressHUDViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView, WBStoryMusicItem, WBStoryMusicNoReultView, WBStoryMusicSearchTextField, WBStoryMusicSearchViewModel, WBStoryNewMusicHeaderView, WBStoryPublishChallengeOverlayEmptyView, WBStoryRLTableView;
@protocol WBStoryMusicControlDelegate, WBStoryMusicPickerViewDelegate, WBStoryMusicSearchViewControllerDelegate;

@interface WBStoryMusicSearchViewController : WBViewController <UITableViewDelegate, UITableViewDataSource, WBStoryMusicTableViewCellDelegate, WBStoryMusicEditViewControllerDelegate, WBStorySaveProgressHUDViewDelegate, UITextFieldDelegate>
{
    unsigned long long _type;
    id <WBStoryMusicPickerViewDelegate> _delegate;
    id <WBStoryMusicSearchViewControllerDelegate> _searchDelegate;
    id <WBStoryMusicControlDelegate> _controlDelegate;
    WBStoryMusicItem *_playingItem;
    WBStoryMusicItem *_selectedMusicItem;
    double _videoDuration;
    WBStoryMusicSearchViewModel *_viewModel;
    UIView *_contentView;
    WBStoryNewMusicHeaderView *_headerView;
    UIView *_searchView;
    WBStoryMusicSearchTextField *_searchTextfield;
    UILabel *_searchResultLabel;
    WBStoryRLTableView *_tableView;
    UIActivityIndicatorView *_indicatorView;
    WBStoryMusicItem *_pendingMusicItem;
    double _headerViewHeight;
    WBStoryMusicNoReultView *_noSearchResultView;
    WBStoryPublishChallengeOverlayEmptyView *_noNetwrokPromptView;
    NSString *_currentSearchText;
}

@property(copy, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) WBStoryPublishChallengeOverlayEmptyView *noNetwrokPromptView; // @synthesize noNetwrokPromptView=_noNetwrokPromptView;
@property(retain, nonatomic) WBStoryMusicNoReultView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) WBStoryMusicItem *pendingMusicItem; // @synthesize pendingMusicItem=_pendingMusicItem;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) WBStoryRLTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *searchResultLabel; // @synthesize searchResultLabel=_searchResultLabel;
@property(retain, nonatomic) WBStoryMusicSearchTextField *searchTextfield; // @synthesize searchTextfield=_searchTextfield;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) WBStoryNewMusicHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WBStoryMusicSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WBStoryMusicItem *selectedMusicItem; // @synthesize selectedMusicItem=_selectedMusicItem;
@property(retain, nonatomic) WBStoryMusicItem *playingItem; // @synthesize playingItem=_playingItem;
@property(nonatomic) __weak id <WBStoryMusicControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(nonatomic) __weak id <WBStoryMusicSearchViewControllerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(nonatomic) __weak id <WBStoryMusicPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)finishNewPageLog;
- (void)finishTapBackButtonLog;
- (void)finishMusicSelectLog:(id)arg1;
- (void)finishCellSelectLog:(id)arg1;
- (void)finishMoreButtonLog:(id)arg1;
- (id)commonLogDict;
- (void)downloadSelectedMusicWithItem:(id)arg1;
- (void)storyMusicEditViewController:(id)arg1 didSelectedMusisItem:(id)arg2;
- (void)storySaveProgressHUDViewDidCancel:(id)arg1;
- (void)resetPlayingStatus;
- (void)textFieldDidTapClearButton;
- (void)searchTextDone:(id)arg1;
- (void)searchTextChanging:(id)arg1;
- (void)finishPickingWithItem:(id)arg1 isAnimation:(_Bool)arg2;
- (void)updateMusicItemState:(id)arg1;
- (_Bool)musicTableViewCellDidClickFavoriteButton:(id)arg1;
- (void)musicTableViewCellDidClickContentButton:(id)arg1;
- (void)musicTableViewCellDidClickSelectButton:(id)arg1;
- (void)musicTableViewCellDidClickMoreButton:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)needLoadMoreData:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelButtonClicked;
- (_Bool)isNetworkReachable;
- (void)setViewsHiddenWithNetworkReachable:(_Bool)arg1 error:(id)arg2;
- (void)reloadData;
- (void)handleButtonClick:(id)arg1;
- (void)dismissController;
- (void)setFetchingDataStatus:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tappedTableView;
- (void)loadMoreData;
- (void)fetchMusicListWithText:(id)arg1;
- (void)musicFavoriteStatusChangedNotification:(id)arg1;
- (void)setSearchResultNum:(long long)arg1;
- (void)initTopSearchView;
- (void)initViews;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

