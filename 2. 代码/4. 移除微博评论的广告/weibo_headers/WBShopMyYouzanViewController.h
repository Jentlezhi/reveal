//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SNHTTPRequestOperationWrapper, UIButton, UIImageView, UILabel, UIView, WBPRLMTableViewWrapper, WBSearchBar, WBShopCustomButton, WBTableView;

@interface WBShopMyYouzanViewController : WBViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PRLMTableViewWrapperDelegate>
{
    unsigned long long page;
    WBSearchBar *_searchBar;
    UIView *_headerView;
    UIView *_headerBackView;
    UIImageView *_imgBackView;
    UIImageView *_faceView;
    UIButton *_faceButton;
    UILabel *_shopLabel;
    UILabel *_totalProductsLabel;
    WBTableView *_tableView;
    WBPRLMTableViewWrapper *_wrapper;
    NSArray *_products;
    WBShopCustomButton *_bindBtn;
    SNHTTPRequestOperationWrapper *_operationWrapper;
}

@property(retain, nonatomic) SNHTTPRequestOperationWrapper *operationWrapper; // @synthesize operationWrapper=_operationWrapper;
@property(retain, nonatomic) WBShopCustomButton *bindBtn; // @synthesize bindBtn=_bindBtn;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) WBPRLMTableViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *totalProductsLabel; // @synthesize totalProductsLabel=_totalProductsLabel;
@property(retain, nonatomic) UILabel *shopLabel; // @synthesize shopLabel=_shopLabel;
@property(retain, nonatomic) UIButton *faceButton; // @synthesize faceButton=_faceButton;
@property(retain, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) UIImageView *imgBackView; // @synthesize imgBackView=_imgBackView;
@property(retain, nonatomic) UIView *headerBackView; // @synthesize headerBackView=_headerBackView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)fetchMore;
- (void)fetchData;
- (void)addShopCartView;
- (void)bindAction:(id)arg1;
- (void)unbindAction:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

