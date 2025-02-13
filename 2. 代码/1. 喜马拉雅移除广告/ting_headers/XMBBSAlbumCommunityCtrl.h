//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMCardItemListBaseCtrl.h"

@class UIButton, UIView, XMBBSCommunity, XMCommunityAlbumHeaderView;
@protocol XMNewAlbumTableViewDidScrollProtocol_BBS;

@interface XMBBSAlbumCommunityCtrl : XMMCardItemListBaseCtrl
{
    unsigned long long _albumId;
    XMBBSCommunity *_communityInfo;
    id <XMNewAlbumTableViewDidScrollProtocol_BBS> _superVC;
    double _offsetY;
    double _lastOffsetY;
    double _currentOffsetY;
    XMCommunityAlbumHeaderView *_comunityInfoView;
    UIView *_moreFooterHolderView;
    UIButton *_moreFooterButton;
}

@property(retain, nonatomic) UIButton *moreFooterButton; // @synthesize moreFooterButton=_moreFooterButton;
@property(retain, nonatomic) UIView *moreFooterHolderView; // @synthesize moreFooterHolderView=_moreFooterHolderView;
@property(retain, nonatomic) XMCommunityAlbumHeaderView *comunityInfoView; // @synthesize comunityInfoView=_comunityInfoView;
@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) __weak id <XMNewAlbumTableViewDidScrollProtocol_BBS> superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) XMBBSCommunity *communityInfo; // @synthesize communityInfo=_communityInfo;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (id)emptyView;
- (void)recordMainVisibleMomentDidHover:(id)arg1;
- (long long)indexOfMoment:(id)arg1;
- (void)requetIntimateCommunityConfig;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)receiveDidExitCommuintyNotification:(id)arg1;
- (void)receiveDidJoinCommuintyNotification:(id)arg1;
- (void)onLoginSuccessNotification;
- (void)onTopicCreateNotification:(id)arg1;
- (void)addNotificationObserver;
- (void)normalCellDidTapCommentButton:(id)arg1;
- (void)nodeHandler:(id)arg1 trackNodeViewDidTapDownloadButton:(id)arg2;
- (void)nodeHandler:(id)arg1 didTapBookMark:(id)arg2 range:(struct _NSRange)arg3 nodeView:(id)arg4;
- (void)nodeHandler:(id)arg1 didUncollectListenlist:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 didCollectListenlist:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 didUnsubscribeAlbum:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 didSubscribeAlbum:(id)arg2 nodeView:(id)arg3;
- (void)nodeHandler:(id)arg1 textNodeView:(id)arg2 didEnterDetailOfTopic:(unsigned long long)arg3 linkUrl:(id)arg4;
- (void)nodeHandler:(id)arg1 didTapNodeView:(id)arg2;
- (void)momentCellHandler:(id)arg1 didShareSuccess:(id)arg2 shareModel:(id)arg3;
- (void)momentCellHandler:(id)arg1 willShare:(id)arg2 shareModel:(id)arg3;
- (void)momentCellHandler:(id)arg1 tapShareButton:(id)arg2;
- (void)momentCellHandler:(id)arg1 tapPraiseButton:(id)arg2;
- (void)momentCellHandler:(id)arg1 tapCommentButton:(id)arg2;
- (void)didEnterDetailOfMoment:(id)arg1 controller:(id)arg2;
- (void)momentCellHandler:(id)arg1 didEnterAuthorUserCenterOfMomment:(id)arg2;
- (void)momentCellHandler:(id)arg1 didEnterSourceDetailOfMoment:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)receiveDidLogoutNotification:(id)arg1;
- (void)receiveDidLoginNotification:(id)arg1;
- (void)clickMoreButton:(id)arg1;
- (void)clickArticleButton:(id)arg1;
- (void)clickQuestionButton:(id)arg1;
- (void)clickCommunityView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

@end

