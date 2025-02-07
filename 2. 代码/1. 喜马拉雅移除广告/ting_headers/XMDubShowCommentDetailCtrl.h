//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentBaseCtrl.h"

@class UIView, XMCommentInputBar, XMCommentReply, XMDubShowComment, XMDubShowCommentCell;

@interface XMDubShowCommentDetailCtrl : XMCommentBaseCtrl
{
    unsigned long long _trackId;
    XMDubShowComment *_comment;
    XMCommentReply *_automaticallyReply;
    CDUnknownBlockType _infoDidChangeBlock;
    CDUnknownBlockType _didDeleteBlock;
    XMCommentInputBar *_inputBar;
    XMDubShowCommentCell *_headerView;
    UIView *_sectionView;
    long long _totalCount;
}

@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) XMDubShowCommentCell *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XMCommentInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(copy, nonatomic) CDUnknownBlockType didDeleteBlock; // @synthesize didDeleteBlock=_didDeleteBlock;
@property(copy, nonatomic) CDUnknownBlockType infoDidChangeBlock; // @synthesize infoDidChangeBlock=_infoDidChangeBlock;
@property(retain, nonatomic) XMCommentReply *automaticallyReply; // @synthesize automaticallyReply=_automaticallyReply;
@property(copy, nonatomic) XMDubShowComment *comment; // @synthesize comment=_comment;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (_Bool)shouldShowEmptyView;
- (void)commentInfoDidChange;
- (void)commentWithInputController:(id)arg1 toComment:(unsigned long long)arg2;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)commentCellDidTapDeleteButon:(id)arg1;
- (void)commentCellDidTapReplyButon:(id)arg1;
- (void)commentCellDidTapPraiseButton:(id)arg1;
- (void)commentCellDidBeLongPressed:(id)arg1;
- (void)commentCellDidTapAvatarImageView:(id)arg1;
- (void)commentInputBarDidBeTapped:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)didSelecteCellWithLayout:(id)arg1 atIndexPath:(id)arg2;
- (void)initializeCell:(id)arg1;
- (void)clickHeaderView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

@end

