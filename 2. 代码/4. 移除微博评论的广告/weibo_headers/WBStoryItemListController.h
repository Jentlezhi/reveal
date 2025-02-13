//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WBStoryFullScreenItemsProvider-Protocol.h"
#import "WBStoryFullScreenPresenterDelegate-Protocol.h"
#import "WBStoryItemCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIImageView, UIView, WBStoryDataController, WBStoryFullScreenPresenter, WBStoryItem, WBStoryItemCollectionViewCell, WBViewController;
@protocol WBStoryItemListControllerDelegate;

@interface WBStoryItemListController : NSObject <WBStoryItemCollectionViewCellDelegate, WBStoryFullScreenPresenterDelegate, WBStoryFullScreenItemsProvider, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct {
        unsigned int isupdating:1;
        unsigned int shouldLogExposeForFullScreen:1;
    } _flags;
    UIImageView *_backgroundView;
    WBStoryFullScreenPresenter *_presenter;
    _Bool _isFirstLoaded;
    UIView *_view;
    WBViewController *_baseViewController;
    WBStoryDataController *_dataController;
    WBStoryItemCollectionViewCell *_selectedCell;
    NSArray *_items;
    UICollectionView *_collectionView;
    WBStoryItem *_currentStoryItem;
    NSMutableDictionary *_extAnalysisParameters;
    id <WBStoryItemListControllerDelegate> _delegate;
    NSMutableSet *_exposuredItemsSet;
}

@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(retain, nonatomic) NSMutableSet *exposuredItemsSet; // @synthesize exposuredItemsSet=_exposuredItemsSet;
@property(nonatomic) __weak id <WBStoryItemListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *extAnalysisParameters; // @synthesize extAnalysisParameters=_extAnalysisParameters;
@property(retain, nonatomic) WBStoryItem *currentStoryItem; // @synthesize currentStoryItem=_currentStoryItem;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) WBStoryItemCollectionViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) WBStoryDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak WBViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)viewControllerStateDidChangeNotification:(id)arg1;
- (id)storyItemsProvider_analysisParameters;
- (void)storyItemsProvider_feedBackForItem:(id)arg1 isPositive:(_Bool)arg2;
- (void)storyItemsProvider_willDismissFromStoryFullScreen;
- (void)storyItemsProvider_didEnterFullScreenForItem:(id)arg1;
- (_Bool)storyItemsProvider_shouldLogExposeForFullScreen:(id)arg1;
- (id)storyItemsProvider_baseViewController;
- (id)storyItemsProvider_currentSourceView;
- (id)visibleCellForItem:(id)arg1;
- (void)storyItemsProvider_updateCurrentStoryItem:(id)arg1;
- (id)storyItemsProvider_currentStoryItem;
- (id)storyItemsProvider_totalStoryItems;
- (id)storyItemsProvider_storyItems;
- (long long)storyItemsProvider_providerType;
- (void)storyFullScreenPresenterStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)cancelPreviousPresent;
- (void)logWithCode:(id)arg1 params:(id)arg2;
- (void)logLongPressCell:(id)arg1;
- (void)logSelectActionWithIndex:(long long)arg1 cell:(id)arg2;
- (void)logExposeForVisibleCells;
- (void)logExpose:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)logRedirectPortraitClick:(id)arg1;
- (void)postFeedBackState:(_Bool)arg1 item:(id)arg2;
- (_Bool)handleStoryItemCellLongPressed:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)userDidSelectItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerUpdateWithResult:(CDUnknownBlockType)arg1;
- (void)triggerUpdate:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowMyStory;
- (id)analysisParametersForFullScreen;
- (void)reloadData;
- (id)createCollectionView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

