//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIEvent, UIView;

@protocol WXPageEventNotifyEventProtocol <NSObject>
- (void)pageDestroy:(NSString *)arg1;
- (void)pageStart:(NSString *)arg1;
- (void)notifyScrollEvent:(NSString *)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3;
- (void)hitTest:(struct CGPoint)arg1 withEvent:(UIEvent *)arg2 withView:(UIView *)arg3;
@end

