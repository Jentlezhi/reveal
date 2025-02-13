//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPopSubview.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UITableView, XMLiveEditCategoryModel, XMLiveNoNetworkView, XMNRequest;
@protocol XMLiveCategoryListViewDelegate;

@interface XMLiveCategoryListView : XMPopSubview <UITableViewDelegate, UITableViewDataSource>
{
    long long _selectedCategoryId;
    NSArray *_categories;
    id <XMLiveCategoryListViewDelegate> _delegate;
    UIActivityIndicatorView *_indicaterView;
    UITableView *_firstLevelTableView;
    UITableView *_secondLevelTableView;
    NSMutableArray *_totalCategories;
    XMLiveEditCategoryModel *_selectedFirstLevelCat;
    XMLiveNoNetworkView *_noNetworkView;
    XMNRequest *_nReq;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMNRequest *nReq; // @synthesize nReq=_nReq;
@property(retain, nonatomic) XMLiveNoNetworkView *noNetworkView; // @synthesize noNetworkView=_noNetworkView;
@property(retain, nonatomic) XMLiveEditCategoryModel *selectedFirstLevelCat; // @synthesize selectedFirstLevelCat=_selectedFirstLevelCat;
@property(retain, nonatomic) NSMutableArray *totalCategories; // @synthesize totalCategories=_totalCategories;
@property(retain, nonatomic) UITableView *secondLevelTableView; // @synthesize secondLevelTableView=_secondLevelTableView;
@property(retain, nonatomic) UITableView *firstLevelTableView; // @synthesize firstLevelTableView=_firstLevelTableView;
@property(retain, nonatomic) UIActivityIndicatorView *indicaterView; // @synthesize indicaterView=_indicaterView;
@property(nonatomic) __weak id <XMLiveCategoryListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) long long selectedCategoryId; // @synthesize selectedCategoryId=_selectedCategoryId;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onRequestDidFinished:(id)arg1;
- (void)onRequestDidFailed:(id)arg1;
- (void)refreshCategoryData;
- (void)onViewHide;
- (void)showWithAnimate:(_Bool)arg1;
- (void)createSubviews;
- (id)initPopFromView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

