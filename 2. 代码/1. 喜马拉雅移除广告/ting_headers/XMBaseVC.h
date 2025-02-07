//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "XMBaseVCProtocol-Protocol.h"
#import "XMLifeCycleEntranceProtocol-Protocol.h"
#import "XMRefreshProtocol-Protocol.h"

@class NSMutableArray, NSString, UIButton;

@interface XMBaseVC : UIViewController <XMRefreshProtocol, XMBaseVCProtocol, XMLifeCycleEntranceProtocol>
{
    NSMutableArray *_lifeCycleEntrances;
    _Bool navigationBarHidden;
    _Bool hiddenTabbar;
    double heightOffset;
    CDUnknownBlockType _pullToRefreshHandler;
}

@property(copy, nonatomic) CDUnknownBlockType pullToRefreshHandler; // @synthesize pullToRefreshHandler=_pullToRefreshHandler;
@property(nonatomic) double heightOffset; // @synthesize heightOffset;
@property(nonatomic) _Bool hiddenTabbar; // @synthesize hiddenTabbar;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden;
- (void).cxx_destruct;
- (void)viewEntranceCallMethod:(long long)arg1 andAnimated:(_Bool)arg2;
- (void)addLifeCycleEntrance:(id)arg1;
- (void)addBackButton;
- (void)dismiss;
- (void)home;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) UIButton *leftButton;
@property(retain, nonatomic) UIButton *rightButton;
- (void)onRightButton:(id)arg1;
- (id)spacer;
- (void)setRightButtonTitle:(id)arg1 icon:(id)arg2 withExtraButtonWidth:(double)arg3;
- (void)setRightButtonTitle:(id)arg1 icon:(id)arg2;
- (void)setLeftButtonTitle:(id)arg1 icon:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType doneActionBlock;
@property(copy, nonatomic) CDUnknownBlockType backActionBlock;
- (id)refreshImages;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)transfer_pullToRefresh;
- (void)reloadData;
- (void)triggerInfiniteScrolling;
- (void)triggerPullToRefresh;
- (void)doneLoadData;
- (void)registerRefreshForScrollView:(id)arg1;
- (id)refreshView;
- (void)setRefreshView:(id)arg1;
@property(nonatomic) _Bool hasLoadMore;
@property(nonatomic) _Bool whiteRefreshStyle;
@property(nonatomic) _Bool hasPullToRefresh;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

