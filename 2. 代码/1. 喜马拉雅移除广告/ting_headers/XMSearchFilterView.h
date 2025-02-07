//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol XMSearchFilterViewDelegate;

@interface XMSearchFilterView : UIView <UITableViewDelegate, UITableViewDataSource, CAAnimationDelegate>
{
    id <XMSearchFilterViewDelegate> _delegate;
    NSArray *_filters;
    UIView *_filterWrapView;
    UIView *_visualEfView;
    UITableView *_tableView;
    struct CGPoint _atPoint;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct CGPoint atPoint; // @synthesize atPoint=_atPoint;
@property(retain, nonatomic) UIView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) UIView *filterWrapView; // @synthesize filterWrapView=_filterWrapView;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) __weak id <XMSearchFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)animationHide;
- (void)showToView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)resetSelection;
- (void)bulid;
- (id)initWithFilters:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

