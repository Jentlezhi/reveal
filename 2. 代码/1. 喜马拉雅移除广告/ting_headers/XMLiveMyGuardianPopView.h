//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveDraggablePopView.h"

#import "XMLiveMyGuardianListViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIViewController, XMLiveMyGuardianListView;
@protocol XMLiveMyGuardianListViewDelegate;

@interface XMLiveMyGuardianPopView : XMLiveDraggablePopView <XMLiveMyGuardianListViewDelegate>
{
    id <XMLiveMyGuardianListViewDelegate> _delegate;
    long long _roomId;
    long long _curPresideId;
    NSString *_curPresideNickname;
    XMLiveMyGuardianListView *_listView;
    UILabel *_listTitleLabel;
    UIButton *_helpBtn;
    UIViewController *_rootVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) UIButton *helpBtn; // @synthesize helpBtn=_helpBtn;
@property(retain, nonatomic) UILabel *listTitleLabel; // @synthesize listTitleLabel=_listTitleLabel;
@property(retain, nonatomic) XMLiveMyGuardianListView *listView; // @synthesize listView=_listView;
@property(copy, nonatomic) NSString *curPresideNickname; // @synthesize curPresideNickname=_curPresideNickname;
@property(nonatomic) long long curPresideId; // @synthesize curPresideId=_curPresideId;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak id <XMLiveMyGuardianListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)myGuardianListViewDidClickAnchorWithItem:(id)arg1;
- (void)myGuardianListViewDidClickOpenGuardian:(id)arg1 anchorUid:(long long)arg2;
- (void)onViewHide;
- (void)showWithAnimate:(_Bool)arg1;
- (double)customedViewHeight;
- (void)onHelp;
- (void)baseInit;
- (id)initWithController:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

