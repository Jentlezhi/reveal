//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class XMSoundHotUpdatePresenter;

@interface XMSoundHotUpdateViewController : XMSubLevelViewController
{
    XMSoundHotUpdatePresenter *_presenter;
}

@property(retain, nonatomic) XMSoundHotUpdatePresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)p_updatePresenter;
- (void)p_updateNoti;
- (void)p_setUI;
- (void)dealloc;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

@end

