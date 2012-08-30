//
//  ZoomRotatePanImageView.h
// 
//
//  Created by bennythemink on 20/07/12.
//  Copyright (c) 2012 AppsCore. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZoomRotatePanImageView : UIImageView <UIGestureRecognizerDelegate> {
    
@protected
    UIPinchGestureRecognizer *_pinchRecogniser;
    UIRotationGestureRecognizer *_rotateRecogniser;
    UIPanGestureRecognizer *_panRecogniser;
    UITapGestureRecognizer *_tapRecogniser;
}


- (void) reset;
- (void) resetWithAnimation:(BOOL)animation;

@end
