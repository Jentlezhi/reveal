//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABFaceImageUtil : NSObject
{
}

+ (_Bool)checkImageRect:(struct CGRect)arg1 withImageSize:(struct CGSize)arg2 withMarginLeft:(float)arg3 withMarginTop:(float)arg4 withMarginRight:(float)arg5 withMarginBottom:(float)arg6;
+ (id)getLocalImage:(id)arg1 withFaceRect:(struct CGRect)arg2;
+ (id)getGlobalImage:(id)arg1 withFaceRect:(struct CGRect)arg2;
+ (id)cropFaceImage:(id)arg1 withFaceRect:(struct CGRect *)arg2;
+ (id)getUplodImage:(id)arg1 withFaceRect:(struct CGRect)arg2;

@end

