//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeVideoElementViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, WBAlertController, WBTableView;
@protocol WBComposeVideoAlbumViewControllerDelegate;

@interface WBComposeVideoAlbumViewController : WBComposeVideoElementViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <WBComposeVideoAlbumViewControllerDelegate> _delegate;
    WBTableView *_tableView;
    WBAlertController *_alertController;
    NSArray *_videoAlbumArray;
    NSMutableArray *_selectedVideoAlbumArray;
    NSMutableArray *_defaultSelectedVideoAlbumArray;
}

@property(retain, nonatomic) NSMutableArray *defaultSelectedVideoAlbumArray; // @synthesize defaultSelectedVideoAlbumArray=_defaultSelectedVideoAlbumArray;
@property(retain, nonatomic) NSMutableArray *selectedVideoAlbumArray; // @synthesize selectedVideoAlbumArray=_selectedVideoAlbumArray;
@property(retain, nonatomic) NSArray *videoAlbumArray; // @synthesize videoAlbumArray=_videoAlbumArray;
@property(retain, nonatomic) WBAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WBComposeVideoAlbumViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)videoAlbumDidAddedNotification:(id)arg1;
- (void)videoAlbumDidFetchedNotification:(id)arg1;
- (void)headerActionButtonPressed;
- (void)dismissAction;
- (void)confirmAction;
- (void)indicatorPressedAction;
- (void)updateSubviewsLayout:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSubviewsDisplay;
- (double)preferredContentHeight;
- (_Bool)isEmptyAlbum;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSelectedVideoAlbums:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

