//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WBXNavigationBarDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIColor, UIImageView, UIScrollView, UIView, WBXApplication, WBXNavigationBar, WBXSwipeView;

@interface WBXSwipeViewController : UIViewController <UIScrollViewDelegate, WBXNavigationBarDelegate>
{
    UIView *_sliderBarView;
    UIImageView *_sliderBarShadow;
    WBXSwipeView *_sliderView;
    NSMutableArray *_sliderButtons;
    UIColor *text_color;
    UIColor *text_selectedColor;
    NSMutableArray *indicatorColors;
    UIColor *backgroundColor;
    NSMutableArray *items;
    NSString *_appId;
    struct CGPoint sliderWidth;
    double sliderOneWidth;
    NSString *navigationBarTitle;
    _Bool clickButtonCaseScroll;
    _Bool _showing;
    WBXNavigationBar *_navigationBar;
    WBXApplication *_app;
    UIScrollView *_container;
    NSArray *_pages;
    unsigned long long _currentIndex;
    struct CGRect _safeFrame;
}

@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) UIScrollView *container; // @synthesize container=_container;
@property(nonatomic) __weak WBXApplication *app; // @synthesize app=_app;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) WBXNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) struct CGRect safeFrame; // @synthesize safeFrame=_safeFrame;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)reLayoutButtonsWithWidth:(double)arg1;
- (void)setupSwipeBar;
- (void)setupPage;
- (id)loadPage:(unsigned long long)arg1;
- (void)setupSwipe;
- (void)viewChange;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)wbx_nav_pop;
- (void)wbx_nav_close;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithConfig:(id)arg1 Pages:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

