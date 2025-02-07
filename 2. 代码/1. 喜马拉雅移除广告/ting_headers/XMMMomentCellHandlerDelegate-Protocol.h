//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, UIViewController, XMCommunityBanner, XMMBannerCell, XMMComment, XMMCommentListView, XMMMoment, XMMMomentCellHandler, XMMOrderCell, XMMPicture, XMMPraiseListView, XMMTrackCell, XMMUserInfo, XMShareModel;

@protocol XMMMomentCellHandlerDelegate <NSObject>

@optional
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 orderCell:(XMMOrderCell *)arg2 didSelectOrder:(NSNumber *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 trackCellDidTapPlayButton:(XMMTrackCell *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 bannerCell:(XMMBannerCell *)arg2 didTapBanner:(XMCommunityBanner *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 praiseListView:(XMMPraiseListView *)arg2 didTapUser:(XMMUserInfo *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 commentListViewDidTapMoreButton:(XMMCommentListView *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 commentListView:(XMMCommentListView *)arg2 didTapUser:(XMMUserInfo *)arg3 inComment:(XMMComment *)arg4;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 commentListView:(XMMCommentListView *)arg2 didTapPicture:(XMMPicture *)arg3 inComment:(XMMComment *)arg4;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 commentListView:(XMMCommentListView *)arg2 didTapComment:(XMMComment *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didShareSuccess:(XMMMoment *)arg2 shareModel:(XMShareModel *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 willShare:(XMMMoment *)arg2 shareModel:(XMShareModel *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 tapMoreButton:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 tapShareButton:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 tapHotPraiseButton:(XMMMoment *)arg2 hotComment:(XMMComment *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 tapPraiseButton:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 tapCommentButton:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didDefollowAuthor:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didFollowAuthor:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 tapFollowButton:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didDepraiseHotComment:(XMMMoment *)arg2 hotComment:(XMMComment *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didPraiseHotComment:(XMMMoment *)arg2 hotComment:(XMMComment *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didDepraiseMoment:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didPraiseMoment:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didDeleteMoment:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didEnterSourceDetailOfMoment:(XMMMoment *)arg2;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didEnterMommentDetail:(XMMMoment *)arg2 controller:(UIViewController *)arg3;
- (void)momentCellHandler:(XMMMomentCellHandler *)arg1 didEnterAuthorUserCenterOfMomment:(XMMMoment *)arg2;
@end

