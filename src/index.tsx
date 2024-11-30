const UtilDpi = require('./NativeUtilDpi').default;

export function multiply(a: number, b: number): number {
  return UtilDpi.multiply(a, b);
}
