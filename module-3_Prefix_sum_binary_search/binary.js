

function binarySearch(arr, x) {
    let l = 0;
    let r = arr.length - 1;

    while (l <= r) {
        let mid_index = Math.floor((l + r) / 2);

        if (arr[mid_index] === x) {
            return true;
        }
        if (x > arr[mid_index]) {
            l = mid_index + 1;
        } else {
            r = mid_index - 1;
        }
    }

    return false;
}

function main() {
    const readline = require('readline');
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question( (nq) => {
        const [n, q] = nq.split(' ').map(Number);

        rl.question( (arrInput) => {
            const a = arrInput.split(' ').map(Number).sort((a, b) => a - b);

            for (let i = 0; i < q; i++) {
                rl.question( (x) => {
                    if (binarySearch(a, parseInt(x))) {
                        console.log('found');
                    } else {
                        console.log('not found');
                    }
                });
            }

            rl.close();
        });
    });
}

main();
