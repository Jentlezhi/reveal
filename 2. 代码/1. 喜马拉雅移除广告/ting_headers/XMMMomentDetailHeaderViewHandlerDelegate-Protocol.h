//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMMMoment, XMMMomentDetailHeaderViewHandler;

@protocol XMMMomentDetailHeaderViewHandlerDelegate <NSObject>

@optional
- (void)momentDetailHeaderViewHandlerDidDefollowAuthor:(XMMMomentDetailHeaderViewHandler *)arg1;
- (void)momentDetailHeaderViewHandlerDidFollowAuthor:(XMMMomentDetailHeaderViewHandler *)arg1;
- (void)momentDetailHeaderViewHandler:(XMMMomentDetailHeaderViewHandler *)arg1 didClickShare:(XMMMoment *)arg2;
- (void)momentDetailHeaderViewHandler:(XMMMomentDetailHeaderViewHandler *)arg1 didClickComment:(XMMMoment *)arg2;
- (void)momentDetailHeaderViewHandler:(XMMMomentDetailHeaderViewHandler *)arg1 didDepraiseMoment:(XMMMoment *)arg2;
- (void)momentDetailHeaderViewHandler:(XMMMomentDetailHeaderViewHandler *)arg1 didPraiseMoment:(XMMMoment *)arg2;
@end

