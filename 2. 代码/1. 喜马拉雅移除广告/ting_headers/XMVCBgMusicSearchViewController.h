//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

#import "XMVCSearchBarDelegate-Protocol.h"

@class NSString, UILabel, XMVCMusicEditView, XMVCSearchBar;

@interface XMVCBgMusicSearchViewController : XMChatBaseScrollVC <XMVCSearchBarDelegate>
{
    _Bool _inLinkRequest;
    XMVCSearchBar *_searchBar;
    UILabel *_emptyLabel;
    XMVCMusicEditView *_musicEditView;
    CDUnknownBlockType _chooseCallback;
}

@property(copy, nonatomic) CDUnknownBlockType chooseCallback; // @synthesize chooseCallback=_chooseCallback;
@property(retain, nonatomic) XMVCMusicEditView *musicEditView; // @synthesize musicEditView=_musicEditView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) XMVCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool inLinkRequest; // @synthesize inLinkRequest=_inLinkRequest;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)receivePlayerNotification:(id)arg1;
- (void)receiveSelectedNotification:(id)arg1;
- (void)vcSearchBarCancelDidClick:(id)arg1;
- (void)vcSearchBarSearchButtonClicked:(id)arg1;
- (void)vcSearchBar:(id)arg1 textDidChanged:(id)arg2 keyBoardInput:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)playActionWithModel:(id)arg1;
- (void)starActionWithModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)updateEmptyString:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (struct CGRect)tableViewFrame;
- (void)viewDidLoad;
- (id)newSearchNavbar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

